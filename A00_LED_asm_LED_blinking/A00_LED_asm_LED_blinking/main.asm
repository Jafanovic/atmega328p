; Blink LED on PB5(Arduino Uno pin 13)
; http://forum.arduino.cc/index.php?topic=159572#msg1194604
#define __SFR_OFFSET 0

start:
	sbi   DDRB, 5 ; Set PB5 as output
blink:
	sbi   PINB, 5 ; Toggle PINB
	ldi r25, 10
	ldi r24, 10
	call  delay_ms
	jmp   blink
delay_ms:
; Delay about (r25:r24)*ms. Clobbers r30, and r31.
; One millisecond is about 16000 cycles at 16MHz.
; The inner loop takes 4 cycles, so we repeat it 3000 times
	ldi r31, 40
	ldi r30, 40
a:
	sbiw r30, 1
	brne a
	sbiw r24, 1
	brne    delay_ms
	ret
