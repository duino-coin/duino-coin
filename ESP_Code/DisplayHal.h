// Abstraction layer for handling various types of screens
// See Settings.h for enabling the screen of your choice
#ifndef DISPLAY_HAL_H
#define DISPLAY_HAL_H

// Abstraction layer: custom fonts, images, etc.
#if defined(DISPLAY_SSD1306)
    static const unsigned char image_check_contour_bits[] U8X8_PROGMEM = {0x00,0x04,0x00,0x0a,0x04,0x11,0x8a,0x08,0x51,0x04,0x22,0x02,0x04,0x01,0x88,0x00,0x50,0x00,0x20,0x00};
    static const unsigned char image_network_1_bar_bits[] U8X8_PROGMEM = {0x00,0x70,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x57,0x00,0x55,0x00,0x55,0x00,0x55,0x70,0x55,0x50,0x55,0x50,0x55,0x50,0x55,0x57,0x55,0x57,0x55,0x77,0x77,0x00,0x00};
    static const unsigned char image_network_2_bars_bits[] U8X8_PROGMEM = {0x00,0x70,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x57,0x00,0x55,0x00,0x55,0x00,0x55,0x70,0x55,0x70,0x55,0x70,0x55,0x70,0x55,0x77,0x55,0x77,0x55,0x77,0x77,0x00,0x00};
    static const unsigned char image_network_3_bars_bits[] U8X8_PROGMEM = {0x00,0x70,0x00,0x50,0x00,0x50,0x00,0x50,0x00,0x57,0x00,0x57,0x00,0x57,0x00,0x57,0x70,0x57,0x70,0x57,0x70,0x57,0x70,0x57,0x77,0x57,0x77,0x57,0x77,0x77,0x00,0x00};
    static const unsigned char image_network_4_bars_bits[] U8X8_PROGMEM = {0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x77,0x00,0x77,0x00,0x77,0x00,0x77,0x70,0x77,0x70,0x77,0x70,0x77,0x70,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x00,0x00};
    static const unsigned char image_duco_logo_bits[] U8X8_PROGMEM = {0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x00,0xff,0x00,0xc0,0x01,0x9f,0x01,0x20,0x01,0x20,0x01,0x20,0x01,0x9f,0x01,0xc0,0x01,0xff,0x00,0x7f,0x00};
    static const unsigned char image_duco_logo_big_bits[] U8X8_PROGMEM = {0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0x01,0x00,0x00,0xfc,0xff,0xff,0x0f,0x00,0x00,0xfc,0xff,0xff,0x3f,0x00,0x00,0xfc,0xff,0xff,0x7f,0x00,0x00,0xfc,0xff,0xff,0xff,0x00,0x00,0xfc,0xff,0xff,0xff,0x01,0x00,0xfc,0xff,0xff,0xff,0x03,0x00,0xf8,0xff,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0xfe,0x0f,0x00,0xfc,0xff,0x03,0xf8,0x0f,0x00,0xfc,0xff,0x0f,0xf0,0x1f,0x00,0xfc,0xff,0x1f,0xe0,0x1f,0x00,0xfc,0xff,0x3f,0xe0,0x3f,0x00,0xfc,0xff,0x7f,0xc0,0x3f,0x00,0xfc,0xff,0xff,0xc0,0x7f,0x00,0xf8,0xff,0xff,0x80,0x7f,0x00,0x00,0x00,0xfe,0x80,0x7f,0x00,0x00,0x00,0xfc,0x81,0x7f,0x00,0x00,0x00,0xfc,0x01,0x7f,0x00,0x00,0x00,0xfc,0x01,0xff,0x00,0x00,0x00,0xfc,0x01,0xff,0x00,0x00,0x00,0xfc,0x01,0xff,0x00,0x00,0x00,0xfc,0x01,0xff,0x00,0x00,0x00,0xfc,0x01,0xff,0x00,0x00,0x00,0xfc,0x81,0x7f,0x00,0x00,0x00,0xfe,0x81,0x7f,0x00,0x00,0x80,0xff,0x80,0x7f,0x00,0xfc,0xff,0xff,0xc0,0x7f,0x00,0xfc,0xff,0xff,0xc0,0x7f,0x00,0xfc,0xff,0x7f,0xe0,0x3f,0x00,0xfc,0xff,0x3f,0xf0,0x3f,0x00,0xfc,0xff,0x1f,0xf8,0x1f,0x00,0xfc,0xff,0x0f,0xfc,0x1f,0x00,0xf8,0xff,0x01,0xfe,0x0f,0x00,0x00,0x00,0xc0,0xff,0x0f,0x00,0xfc,0xff,0xff,0xff,0x07,0x00,0xfc,0xff,0xff,0xff,0x03,0x00,0xfc,0xff,0xff,0xff,0x01,0x00,0xfc,0xff,0xff,0xff,0x00,0x00,0xfc,0xff,0xff,0x7f,0x00,0x00,0xfc,0xff,0xff,0x1f,0x00,0x00,0xfc,0xff,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
#endif

#if defined(DISPLAY_16X2)
    static byte duco_logo[] = {0x1E, 0x01, 0x1D, 0x05, 0x1D, 0x01, 0x1E, 0x00};
    static byte check_mark[] = {0x00, 0x00, 0x00, 0x01, 0x02,0x14, 0x08, 0x00};
    static byte kh[] = {0x08, 0x0A, 0x0C, 0x0A, 0x00, 0x0A, 0x0E, 0x0A};
    static byte msec[] = {0x0A, 0x15, 0x11, 0x06, 0x08, 0x04, 0x02, 0x0C};
#endif

#if defined(DISPLAY_ST7789)
    // Define colors
    #define WHITE       TFT_WHITE
    #define BLACK       TFT_BLACK
    #define DUCO_GOLD   0xFD20
    #define DUCO_GRAY   0x7BEF
    #define DUCO_DARK   0x39E7
    #define DUCO_GREEN  0x07E0
    #define DUCO_CYAN   0x07FF

    // Button and rotation
    #define TFT_BUTTON_PIN 0  // Boot button on T-Display S3
    uint8_t tft_rotation = 1; // 0,1,2,3 = 4 orientations
    volatile bool tft_rotation_changed = false;

    // Interrupt handler - fires instantly on button press
    void IRAM_ATTR buttonISR() {
      tft_rotation_changed = true;
    }

    // Draw WiFi signal bars
    void drawWifiBars(int x, int y) {
      int rssi = WiFi.RSSI();
      int bars = (rssi > -40) ? 4 : (rssi > -60) ? 3 : (rssi > -75) ? 2 : 1;
      for (int i = 0; i < 4; i++) {
        int barH = 6 + i * 5;
        int barY = y + 20 - barH;
        uint16_t color = (i < bars) ? DUCO_GREEN : DUCO_DARK;
        tft.fillRect(x + i * 9, barY, 7, barH, color);
      }
    }

    // Draw checkmark icon
    void drawCheckmark(int x, int y) {
      tft.drawLine(x, y+8, x+5, y+13, DUCO_GREEN);
      tft.drawLine(x+1, y+8, x+6, y+13, DUCO_GREEN);
      tft.drawLine(x+5, y+13, x+14, y+2, DUCO_GREEN);
      tft.drawLine(x+6, y+13, x+15, y+2, DUCO_GREEN);
    }

    // State flags
    bool tft_layout_drawn = false;
    volatile bool tft_busy = false;

    // Apply rotation change (called from main loop, not ISR)
    void checkButton() {
      if (tft_rotation_changed) {
        tft_rotation_changed = false;
        tft_rotation = (tft_rotation + 1) % 4; // Cycle: 0→1→2→3→0
        tft.setRotation(tft_rotation);
        tft_layout_drawn = false;
      }
    }

    // Check if current rotation is landscape (1 or 3) or portrait (0 or 2)
    bool isLandscape() {
      return (tft_rotation == 1 || tft_rotation == 3);
    }

    // Draw static layout (separators + labels)
    void drawStaticLayout() {
      tft.fillScreen(BLACK);
      tft.setTextColor(DUCO_GRAY, BLACK);

      if (isLandscape()) {
        // === LANDSCAPE 320x170 ===
        tft.drawFastHLine(0, 28, 320, DUCO_DARK);
        tft.drawFastHLine(0, 105, 320, DUCO_DARK);
        tft.drawFastHLine(0, 140, 320, DUCO_DARK);
        tft.drawFastHLine(200, 55, 115, DUCO_DARK);
        // diff and shr/s labels on right side (static)
        tft.setTextSize(1);
        tft.setCursor(280, 40);
        tft.print("diff");
        tft.setCursor(274, 65);
        tft.print("shr/s");
        tft.setCursor(5, 147);
        tft.print("Duino-Coin " + String(SOFTWARE_VERSION));
      } else {
        // === PORTRAIT 170x320 ===
        tft.drawFastHLine(0, 28, 170, DUCO_DARK);
        tft.drawFastHLine(0, 130, 170, DUCO_DARK);
        tft.drawFastHLine(0, 195, 170, DUCO_DARK);
        tft.drawFastHLine(0, 255, 170, DUCO_DARK);
        // kH/s label centered
        tft.setTextSize(2);
        tft.setCursor(55, 100);
        tft.print("kH/s");
        // Bottom version
        tft.setTextSize(1);
        tft.setCursor(5, 262);
        tft.print("Duino-Coin " + String(SOFTWARE_VERSION));
      }
      tft_layout_drawn = true;
    }
#endif

  #if defined(DISPLAY_SSD1306)
    void drawStrMultiline(const char *msg, int xloc, int yloc) {
     //https://github.com/olikraus/u8g2/discussions/1479
     int dspwidth = u8g2.getDisplayWidth();    
     int strwidth = 0;          
     char glyph[2]; glyph[1] = 0;
  
     for (const char *ptr = msg, *lastblank = NULL; *ptr; ++ptr) {
        while (xloc == 0 && *msg == ' ')
           if (ptr == msg++) ++ptr;                     
  
        glyph[0] = *ptr;
        strwidth += u8g2.getStrWidth(glyph);                   
        if (*ptr == ' ')  lastblank = ptr;                 
        else ++strwidth;                       
  
        if (xloc + strwidth > dspwidth) {                       
           int starting_xloc = xloc;
           while (msg < (lastblank ? lastblank : ptr)) {                       
              glyph[0] = *msg++;
              xloc += u8g2.drawStr(xloc, yloc, glyph); 
           }
  
           strwidth -= xloc - starting_xloc;                       
           yloc += u8g2.getMaxCharHeight();                      
           xloc = 0; lastblank = NULL;
        }
     }
     while (*msg) {                        
        glyph[0] = *msg++;
        xloc += u8g2.drawStr(xloc, yloc, glyph);
     }
    }
#endif

#if defined(DISPLAY_SSD1306) || defined(DISPLAY_16X2) || defined(DISPLAY_ST7789)
    void screen_setup() {
      // Ran during setup()
      // Abstraction layer: screen initialization

      #if defined(DISPLAY_SSD1306)
          u8g2.begin();
          u8g2.clearBuffer();
          u8g2.setFontMode(1);
          u8g2.setBitmapMode(1);
          u8g2.sendBuffer();
      #endif

      #if defined(DISPLAY_16X2)
          lcd.begin(16, 2);
          lcd.createChar(0, duco_logo);
          lcd.createChar(1, check_mark);
          lcd.createChar(2, kh);
          lcd.createChar(3, msec);
          lcd.home();
          lcd.clear();
      #endif

      #if defined(DISPLAY_ST7789)
        pinMode(TFT_BUTTON_PIN, INPUT_PULLUP);
        attachInterrupt(digitalPinToInterrupt(TFT_BUTTON_PIN), buttonISR, FALLING);
        tft.begin();
        tft.setRotation(tft_rotation);
        tft.init();
        tft.fillScreen(BLACK);
      #endif
    }


    void display_boot() {
      // Abstraction layer: compilation time, features, etc.

      #if defined(DISPLAY_16X2)
          lcd.clear();
          #if defined(ESP8266)
            lcd.print("ESP8266 ");
          #elif defined(CONFIG_FREERTOS_UNICORE)
            lcd.print("ESP32S2 ");
          #else
            lcd.print("ESP32 ");
          #endif
          #if defined(ESP8266)
            lcd.print(String(ESP.getCpuFreqMHz()).c_str());
          #else
            lcd.print(String(getCpuFrequencyMhz()).c_str());
          #endif
          lcd.print(" MHz");

          lcd.setCursor(0, 1);
          lcd.print(__DATE__);
      #endif

      #if defined(DISPLAY_SSD1306)
          u8g2.clearBuffer();
          
          u8g2.setFont(u8g2_font_profont15_tr);
          u8g2.setCursor(2, 13);
          #if defined(ESP8266)
            u8g2.print("ESP8266 ");
          #elif defined(CONFIG_FREERTOS_UNICORE)
            u8g2.print("ESP32S2/C3 ");
          #else
            u8g2.print("ESP32 ");
          #endif
  
          #if defined(ESP8266)
            u8g2.print(String(ESP.getCpuFreqMHz()).c_str());
          #else
            u8g2.print(String(getCpuFrequencyMhz()).c_str());
          #endif
          u8g2.print(" MHz");
  
          u8g2.setFont(u8g2_font_profont10_tr);
          u8g2.drawLine(1, 27, 126, 27);
          u8g2.setCursor(2, 24);
          u8g2.print("Compiled ");
          u8g2.print(__DATE__);
          
          
          // HashCore attribution on the SSD1306 boot screen (no mining UI changes).
          u8g2.drawStr(2, 37, "HashCore | Features:");
          u8g2.setCursor(2, 46);
          String features_str = "OTA ";
          #if defined(USE_LAN)
            features_str += "LAN ";
          #endif
          #if defined(LED_BLINKING)
            features_str += "Blink ";
          #endif
          #if defined(SERIAL_PRINTING)
            features_str += "Serial ";
          #endif
          #if defined(WEB_DASHBOARD)
            features_str += "Webserver ";
          #endif
          #if defined(DISPLAY_16X2)
            features_str += "LCD16X2 ";
          #endif
          #if defined(DISPLAY_SSD1306)
            features_str += "SSD1306 ";
          #endif
          #if defined(USE_INTERNAL_SENSOR)
            features_str += "Int. sensor ";
          #endif
          #if defined(USE_DS18B20)
            features_str += "DS18B20 ";
          #endif
          #if defined(USE_DHT)
            features_str += "DHT ";
          #endif
          #if defined(USE_HSU07M)
            features_str += "HSU07M ";
          #endif
          drawStrMultiline(features_str.c_str(), 2, 46);
          u8g2.sendBuffer();
      #endif

      #if defined(DISPLAY_ST7789)
          tft.fillScreen(BLACK);
          tft_layout_drawn = false;
          int sw = tft.width();
          bool landscape = isLandscape();

          // Board type + frequency
          tft.setTextColor(DUCO_GOLD, BLACK);
          tft.setTextSize(landscape ? 3 : 2);
          tft.setCursor(10, 15);
          #if defined(ESP8266)
            tft.print("ESP8266 ");
          #elif defined(CONFIG_FREERTOS_UNICORE)
            tft.print("ESP32S2/C3 ");
          #else
            tft.print("ESP32 ");
          #endif
          #if defined(ESP8266)
            tft.print(String(ESP.getCpuFreqMHz()).c_str());
          #else
            tft.print(String(getCpuFrequencyMhz()).c_str());
          #endif
          tft.print(" MHz");

          // Separator
          tft.drawFastHLine(10, landscape ? 50 : 45, sw - 20, DUCO_DARK);

          // Compile date
          tft.setTextColor(WHITE, BLACK);
          tft.setTextSize(landscape ? 2 : 1);
          tft.setCursor(10, landscape ? 60 : 55);
          tft.print("Compiled ");
          tft.print(__DATE__);

          // Features
          tft.setTextColor(DUCO_CYAN, BLACK);
          tft.setTextSize(landscape ? 2 : 1);
          tft.setCursor(10, landscape ? 90 : 75);
          tft.print("Features:");
          tft.setTextColor(WHITE, BLACK);
          tft.setTextSize(1);
          tft.setCursor(10, landscape ? 115 : 95);
          String features_str = "OTA ";
          #if defined(USE_LAN)
            features_str += "LAN ";
          #endif
          #if defined(LED_BLINKING)
            features_str += "Blink ";
          #endif
          #if defined(SERIAL_PRINTING)
            features_str += "Serial ";
          #endif
          #if defined(WEB_DASHBOARD)
            features_str += "Webserver ";
          #endif
          #if defined(DISPLAY_ST7789)
            features_str += "ST7789 ";
          #endif
          #if defined(USE_INTERNAL_SENSOR)
            features_str += "Int.sensor ";
          #endif
          #if defined(USE_DS18B20)
            features_str += "DS18B20 ";
          #endif
          #if defined(USE_DHT)
            features_str += "DHT ";
          #endif
          #if defined(USE_HSU07M)
            features_str += "HSU07M ";
          #endif
          tft.print(features_str);
      #endif
    }

    void display_info(String message) {
      // Abstraction layer: info screens (setups)
      
      #if defined(DISPLAY_SSD1306)
          u8g2.clearBuffer();
          u8g2.drawXBMP(-1, 3, 41, 45, image_duco_logo_big_bits);
          u8g2.setFont(u8g2_font_t0_16b_tr);
          #if defined(ESP8266)
              u8g2.drawStr(42, 27, "ESP8266");
          #elif defined(CONFIG_FREERTOS_UNICORE)
              u8g2.drawStr(42, 27, "ESP32S2/C3");
          #else
              u8g2.drawStr(42, 27, "ESP32");
          #endif
          u8g2.setFont(u8g2_font_t0_13b_tr);
          u8g2.drawStr(41, 14, "Duino-Coin");
          u8g2.setFont(u8g2_font_6x10_tr);
          u8g2.drawStr(98, 36, "MINER");
          u8g2.setFont(u8g2_font_6x13_tr);
          u8g2.drawStr(1, 60, message.c_str());
          u8g2.setFont(u8g2_font_5x8_tr);
          u8g2.drawStr(42, 46, "www.duinocoin.com");
          u8g2.setFont(u8g2_font_4x6_tr);
          u8g2.drawStr(116, 14, String(SOFTWARE_VERSION).c_str());
          u8g2.sendBuffer();
      #endif

      #if defined(DISPLAY_16X2)
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.write(0);
          lcd.print(" Duino-Coin ");
          lcd.print(SOFTWARE_VERSION);
          lcd.setCursor(0, 1);
          lcd.print(message);
      #endif

      #if defined(DISPLAY_ST7789)
          tft.fillScreen(BLACK);
          tft_layout_drawn = false;
          int sw = tft.width();
          bool landscape = isLandscape();
          int sh = tft.height();

          // Duino-Coin title
          tft.setTextColor(DUCO_GOLD, BLACK);
          tft.setTextSize(landscape ? 3 : 2);
          tft.setCursor(landscape ? 50 : 10, 10);
          tft.print("Duino-Coin");

          // Board type
          tft.setTextColor(WHITE, BLACK);
          tft.setTextSize(landscape ? 3 : 2);
          tft.setCursor(landscape ? 50 : 10, landscape ? 45 : 40);
          #if defined(ESP8266)
            tft.print("ESP8266");
          #elif defined(CONFIG_FREERTOS_UNICORE)
            tft.print("ESP32S2/C3");
          #else
            tft.print("ESP32");
          #endif

          // MINER label
          tft.setTextColor(DUCO_GOLD, BLACK);
          tft.setTextSize(2);
          tft.setCursor(landscape ? 230 : 100, landscape ? 50 : 45);
          tft.print("MINER");

          // Version
          tft.setTextSize(1);
          tft.setTextColor(DUCO_GRAY, BLACK);
          tft.setCursor(landscape ? 280 : 10, landscape ? 70 : 70);
          tft.print("v");
          tft.print(String(SOFTWARE_VERSION).c_str());

          // URL
          tft.setTextColor(DUCO_GRAY, BLACK);
          tft.setTextSize(1);
          tft.setCursor(landscape ? 50 : 10, landscape ? 85 : 85);
          tft.print("www.duinocoin.com");

          // Message
          tft.setTextColor(WHITE, BLACK);
          tft.setTextSize(2);
          tft.setCursor(10, landscape ? 130 : 110);
          tft.print(message);
      #endif
    }


    void display_mining_results(String hashrate, String accepted_shares, String total_shares, String uptime, String node, 
                                String difficulty, String sharerate, String ping, String accept_rate) {
      // Ran after each found share
      // Abstraction layer: displaying mining results
      Serial.println("Displaying mining results");
      
      #if defined(DISPLAY_SSD1306)
          u8g2.clearBuffer();
          u8g2.setFont(u8g2_font_profont10_tr);
          u8g2.drawStr(67, 26, "kH");
          if (hashrate.toFloat() < 100.0) {
            u8g2.setFont(u8g2_font_profont29_tr);
            u8g2.drawStr(2, 36, hashrate.c_str());
          } else {
            u8g2.setFont(u8g2_font_profont22_tr);
            u8g2.drawStr(3, 35, hashrate.c_str());
          }
          
          u8g2.setFont(u8g2_font_haxrcorp4089_tr);
          u8g2.drawStr(52, 12, node.c_str());
          
          u8g2.setFont(u8g2_font_t0_11_tr);
          u8g2.drawStr(17, 47, (accepted_shares + "/" + total_shares).c_str());
          u8g2.setFont(u8g2_font_5x7_tr);
          u8g2.drawStr(88, 47, ("(" + accept_rate + "%)").c_str());
          
          u8g2.setFont(u8g2_font_profont12_tr);
          u8g2.drawStr(20, 12, (ping + "ms").c_str());
          u8g2.drawStr(69, 36, "s");
          
          u8g2.setFont(u8g2_font_6x13_tr);
          u8g2.drawStr(125-u8g2.getStrWidth(uptime.c_str()), 61, uptime.c_str());
          
          u8g2.drawStr(85, 38, sharerate.c_str());
          u8g2.drawStr(85, 27, difficulty.c_str());
          u8g2.drawLine(67, 28, 75, 28);
          
          u8g2.drawXBMP(2, 38, 13, 10, image_check_contour_bits);
          
          if (WiFi.RSSI() > -40) {
            u8g2.drawXBMP(1, 0, 15, 16, image_network_4_bars_bits);
          } else if (WiFi.RSSI() > -60) {
            u8g2.drawXBMP(1, 0, 15, 16, image_network_3_bars_bits);
          } else if (WiFi.RSSI() > -75) {
            u8g2.drawXBMP(1, 0, 15, 16, image_network_2_bars_bits);
          } else {
            u8g2.drawXBMP(1, 0, 15, 16, image_network_1_bar_bits);
          }
          
          u8g2.setFont(u8g2_font_4x6_tr);
          u8g2.drawStr(14, 61, String(WiFi.localIP().toString()).c_str());
          u8g2.drawStr(14, 55, ("Duino-Coin " + String(SOFTWARE_VERSION)).c_str());
          u8g2.drawXBMP(2, 11, 9, 50, image_duco_logo_bits);
          u8g2.drawStr(111, 27, "diff");
          u8g2.drawStr(107, 38, "shr/s");
          
          u8g2.sendBuffer();
      #endif

      #if defined(DISPLAY_16X2)
          lcd.clear();
          lcd.setCursor(0,0);
          lcd.print(hashrate);
          lcd.setCursor(4,0);
          lcd.write(2); // kh

          lcd.setCursor(7, 0);
          lcd.print(difficulty);
          lcd.print(" diff");

          lcd.setCursor(0, 1);
          lcd.write(1); // checkmark
          lcd.print(accepted_shares);

          lcd.setCursor(7, 1);
          lcd.print(ping);
          lcd.write(3); // ms

          lcd.setCursor(12, 1);
          lcd.print(sharerate);
          lcd.print("s");
      #endif

      #if defined(DISPLAY_ST7789)
          // Prevent concurrent access from both cores
          if (tft_busy) return;
          tft_busy = true;

          // Check for rotation button press
          checkButton();

          // Draw static layout elements once (separators, labels)
          if (!tft_layout_drawn) {
            drawStaticLayout();
          }

          if (isLandscape()) {
            // ========== LANDSCAPE 320x170 ==========
            // === TOP BAR ===
            drawWifiBars(5, 3);
            tft.setTextColor(WHITE, BLACK);
            tft.setTextSize(2);
            tft.setCursor(45, 6);
            tft.print(ping + "ms   ");
            tft.setTextSize(1);
            tft.setTextColor(DUCO_GRAY, BLACK);
            tft.setCursor(140, 10);
            tft.print(node + "   ");

            // === HASHRATE ===
            tft.fillRect(5, 35, 125, 40, BLACK);
            tft.setTextColor(DUCO_GREEN, BLACK);
            if (hashrate.toFloat() < 100.0) {
              tft.setTextSize(4);
              tft.setCursor(5, 40);
            } else {
              tft.setTextSize(3);
              tft.setCursor(5, 45);
            }
            tft.print(hashrate);
            // kH/s label redrawn every cycle (prevents it from being erased)
            tft.setTextColor(DUCO_GRAY, BLACK);
            tft.setTextSize(2);
            tft.setCursor(135, 45);
            tft.print("kH/s");

            // === DIFF + SHARERATE ===
            tft.fillRect(205, 35, 70, 16, BLACK);
            tft.fillRect(205, 62, 70, 16, BLACK);
            tft.setTextColor(WHITE, BLACK);
            tft.setTextSize(2);
            tft.setCursor(210, 35);
            tft.print(difficulty);
            tft.setCursor(210, 62);
            tft.print(sharerate);

            // === SHARES ===
            tft.fillRect(3, 110, 20, 18, BLACK);
            drawCheckmark(5, 112);
            tft.setTextColor(WHITE, BLACK);
            tft.setTextSize(2);
            tft.setCursor(28, 112);
            tft.print(accepted_shares + "/" + total_shares + "  ");
            tft.setTextSize(1);
            tft.setTextColor(DUCO_CYAN, BLACK);
            tft.setCursor(215, 118);
            tft.print("(" + accept_rate + "%)  ");

            // === BOTTOM ===
            tft.setTextSize(1);
            tft.setTextColor(DUCO_GRAY, BLACK);
            tft.setCursor(5, 158);
            tft.print(WiFi.localIP().toString() + "   ");
            tft.fillRect(160, 145, 160, 20, BLACK);
            tft.setTextColor(WHITE, BLACK);
            tft.setTextSize(2);
            int uptimeW = uptime.length() * 12;
            tft.setCursor(315 - uptimeW, 148);
            tft.print(uptime);

          } else {
            // ========== PORTRAIT 170x320 ==========
            // === TOP BAR (0..27) ===
            drawWifiBars(5, 3);
            tft.setTextColor(WHITE, BLACK);
            tft.setTextSize(2);
            tft.setCursor(45, 6);
            tft.print(ping + "ms  ");
            // Node doesn't fit well on top bar in portrait, skip or shrink

            // === HASHRATE (30..129) ===
            tft.fillRect(5, 35, 160, 60, BLACK);
            tft.setTextColor(DUCO_GREEN, BLACK);
            if (hashrate.toFloat() < 100.0) {
              tft.setTextSize(5);
              tft.setCursor(10, 42);
            } else {
              tft.setTextSize(4);
              tft.setCursor(10, 48);
            }
            tft.print(hashrate);

            // === STATS (132..194) ===
            tft.fillRect(5, 135, 90, 20, BLACK);
            tft.setTextColor(WHITE, BLACK);
            tft.setTextSize(2);
            tft.setCursor(5, 138);
            tft.print(difficulty);
            tft.setTextSize(1);
            tft.setTextColor(DUCO_GRAY, BLACK);
            tft.setCursor(100, 143);
            tft.print("diff");

            tft.fillRect(5, 162, 90, 20, BLACK);
            tft.setTextColor(WHITE, BLACK);
            tft.setTextSize(2);
            tft.setCursor(5, 165);
            tft.print(sharerate);
            tft.setTextSize(1);
            tft.setTextColor(DUCO_GRAY, BLACK);
            tft.setCursor(100, 170);
            tft.print("shr/s");

            // === SHARES (197..254) ===
            tft.fillRect(3, 202, 20, 18, BLACK);
            drawCheckmark(5, 204);
            tft.setTextColor(WHITE, BLACK);
            tft.setTextSize(2);
            tft.setCursor(28, 204);
            tft.print(accepted_shares + "/" + total_shares + "  ");
            tft.setTextSize(1);
            tft.setTextColor(DUCO_CYAN, BLACK);
            tft.setCursor(28, 228);
            tft.print("(" + accept_rate + "%)  ");

            // Node name
            tft.setTextColor(DUCO_GRAY, BLACK);
            tft.setTextSize(1);
            tft.setCursor(5, 243);
            tft.print(node + "   ");

            // === BOTTOM (257..320) ===
            tft.setTextSize(1);
            tft.setTextColor(DUCO_GRAY, BLACK);
            tft.setCursor(5, 275);
            tft.print(WiFi.localIP().toString() + "   ");

            tft.fillRect(0, 290, 170, 25, BLACK);
            tft.setTextColor(WHITE, BLACK);
            tft.setTextSize(2);
            int uptimeW = uptime.length() * 12;
            tft.setCursor(165 - uptimeW, 295);
            tft.print(uptime);
          }

          tft_busy = false;
      #endif
    }
#endif

#endif
