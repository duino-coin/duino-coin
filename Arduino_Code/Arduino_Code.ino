//////////////////////////////////////////////////////////
//  _____        _                    _____      _
// |  __ \      (_)                  / ____|    (_)
// | |  | |_   _ _ _ __   ___ ______| |     ___  _ _ __
// | |  | | | | | | '_ \ / _ \______| |    / _ \| | '_ \ 
// | |__| | |_| | | | | | (_) |     | |___| (_) | | | | |
// |_____/ \__,_|_|_| |_|\___/       \_____\___/|_|_| |_|
//  Code for Arduino boards v2.51
//  © Duino-Coin Community 2019-2021
//  Distributed under MIT License
//////////////////////////////////////////////////////////
//  https://github.com/revoxhere/duino-coin - GitHub
//  https://duinocoin.com - Official Website
//  https://discord.gg/k48Ht5y - Discord
//////////////////////////////////////////////////////////
//  If you don't know what to do, visit official website
//  and navigate to Getting Started page. Happy mining!
//////////////////////////////////////////////////////////

// Include SHA1 library
// Authors: https://github.com/daknuett, https://github.com/JoyBed, https://github.com/revox
// Improvements: https://github.com/joaquinbvw
#include "sha1.h"
// Include Arduino identifier library
// Author: https://github.com/ricaun
#include "uniqueID.h"
// Create globals
String lastblockhash = "";
String newblockhash = "";
String DUCOID = "";
uint16_t difficulty = 0;
uint16_t ducos1result = 0;
const uint16_t job_maxsize = 104; // 40+40+20+3 is the maximum size of a job
uint8_t job[job_maxsize];

// Setup stuff
void setup() {
  // Prepare built-in led pin as output
  pinMode(LED_BUILTIN, OUTPUT);
  DUCOID = get_DUCOID();
  // Open serial port
  Serial.begin(115200);
  Serial.setTimeout(7000);
  while(!Serial); // For Arduino Leonardo or any board with the ATmega32U4
  Serial.flush();
}

// DUCO-S1A hasher
uint16_t ducos1a(String lastblockhash, String newblockhash, uint16_t difficulty)
{
  // DUCO-S1 algorithm implementation for AVR boards (DUCO-S1A)
  newblockhash.toUpperCase();
  const char *c = newblockhash.c_str();
  size_t final_len = newblockhash.length() / 2;
  memset(job, 0, job_maxsize);
  for (size_t i = 0, j = 0; j < final_len; i += 2, j++)
    job[j] = (c[i] % 32 + 9) % 25 * 16 + (c[i + 1] % 32 + 9) % 25;

  // Difficulty loop
  for (uint16_t ducos1res = 0; ducos1res < difficulty * 100 + 1; ducos1res++)
  {
    Sha1.init();
    Sha1.print(lastblockhash + ducos1res);
    // Get SHA1 result
    uint8_t *hash_bytes = Sha1.result();
    if (memcmp(hash_bytes, job, sizeof(hash_bytes)) == 0)
    {
      // If expected hash is equal to the found hash, return the result
      return ducos1res;
    }
  }
  return 0;
}

// Grab Arduino chip DUCOID
String get_DUCOID() {
  String ID = "DUCOID";
  char buff[4];
  for (size_t i = 0; i < 8; i++)
  {
    sprintf(buff, "%02X", (uint8_t) UniqueID8[i]);
    ID += buff;
  }
  return ID;
}

// Infinite loop
void loop() {
  // Wait for serial data
  while (Serial.available() > 0) {
    // Read last block hash
    lastblockhash = Serial.readStringUntil(',');
    // Read expected hash
    newblockhash = Serial.readStringUntil(',');
    // Read difficulty
    difficulty = Serial.readStringUntil(',').toInt();
    // Clearing the receive buffer reading one job.
    while (Serial.available())
      Serial.read();
    // Start time measurement
    uint16_t startTime = micros();
    // Call DUCO-S1A hasher
    ducos1result = ducos1a(lastblockhash, newblockhash, difficulty);
    // Calculate elapsed time
    uint16_t elapsedTime = micros() - startTime;
    // Clearing the receive buffer before sending the result.
    while (Serial.available())
      Serial.read();
    // Send result back to the program with share time
    Serial.print(String(ducos1result) + "," + String(elapsedTime) + "," + DUCOID + "\n");
    // Turn on built-in led
    PORTB = PORTB | B00100000;
    // Wait a bit
    delay(25);
    // Turn off built-in led
    PORTB = PORTB & B11011111;
  }
}
