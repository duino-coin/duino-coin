.global sha1_rotl1
.global sha1_rotl5
.global sha1_rotl30

; uint32_t sha1_rotl1(uint32_t val)
; Input: 
;   - x value in r25:r22 (little-endian: r22 is LSB, r25 is MSB)
; Output:
;   - w result in r25:r22
sha1_rotl1:
    ; Rotate entire 32-bit value left by 1
    lsl r22         ; Shift LSB, MSB to carry
    rol r23         ; Rotate next byte through carry
    rol r24         ; Rotate next byte through carry
    rol r25         ; Rotate MSB through carry
    
    ; Handle wrap-around bit
    brcc no_carry_32
    ori r22, 0x01   ; Set LSB if carry was set
no_carry_32:
    ret

; Input: 
;   - a value in r25:r22 (little-endian: r22 is LSB, r25 is MSB)
; Output:
;   - temp result in r25:r22
sha1_rotl5:
    clr r20          ; Will accumulate the 5 carry-out bits

    lsl r22          ; Rotate #1
    rol r23
    rol r24
    rol r25
    rol r20

    lsl r22          ; Rotate #2
    rol r23
    rol r24
    rol r25
    rol r20

    lsl r22          ; Rotate #3
    rol r23
    rol r24
    rol r25
    rol r20

    lsl r22          ; Rotate #4
    rol r23
    rol r24
    rol r25
    rol r20

    lsl r22          ; Rotate #5
    rol r23
    rol r24
    rol r25
    rol r20          ; Now r20 contains the 5 bits that wrapped around

    ; r20 now contains bits 31..27 (original MSBs) in its lowest 5 bits
    ; OR them into r22 (LSB)
    or r22, r20

    ret

; Input: 32-bit value in r25:r22 (r25=MSB, r22=LSB)
; Output: Rotated result in r25:r22
sha1_rotl30:
    ; Save original bits 0-1 from the LSB (r22) and shift them to positions 6-7.
    mov   r20, r22       ; r20 = original r22
    andi  r20, 0x03      ; r20 = (r22 & 0x03)
    ; Multiply r20 by 64 (i.e. shift left by 6)
    lsl   r20
    lsl   r20
    lsl   r20
    lsl   r20
    lsl   r20
    lsl   r20           ; now r20 = (r22 & 0x03) << 6

    ; Shift the entire 32-bit value right by 2 bits (which is equivalent to rotating left by 30)
    lsr   r25          ; shift MSB (r25) right by 1; its LSB goes into carry
    ror   r24          ; rotate r24 right through carry
    ror   r23          ; rotate r23 right through carry
    ror   r22          ; rotate r22 right through carry  -- first shift

    lsr   r25          ; second shift: shift r25 right by 1
    ror   r24
    ror   r23
    ror   r22          ; second shift

    ; OR the saved bits into the MSB (r25)
    or    r25, r20

    ret
