# Arduino Nano Tutorial
The Arduino Nano is a microcontroller board, based on the ATmega328P microcontroller by Atmel. The
Atmega328 comes with built-in bootloader, which makes it very easy to flash the board with your
code. Like all Arduino boards, you can program the software running on the board using a language
derived from C and C++. The easiest development environment is the Arduino IDE. The Nano is the
smallest board of the Arduino boards but has nearly the same datasheet like the Arduino Uno. Only
the power jack is missing and instead of a standard USB port the Nano has a Mini-B USB plug

## Onedrive Library
 - [Arduino Projects  for Amateur Radio](https://1drv.ms/b/s!Ajq2sO-eH2xUh9JFhNR0rJTop991gQ)
 - [Make: BasicArduinoProjects - 26 Experiments with Microcontrollersand Electronics - Wilcher](https://1drv.ms/b/s!Ajq2sO-eH2xUhqoUgp7eInDVhy4eZw)
 - [Beginning Arduino](https://1drv.ms/b/s!Ajq2sO-eH2xUhqovdJQ5uGLEYzCfhA)
 - [Building a Home Security System with Arduino](https://1drv.ms/b/s!Ajq2sO-eH2xUhqokTUNXz5gSBItVWg)
 - [ake: Getting Started with Arduino - 3rd Edition](https://1drv.ms/b/s!Ajq2sO-eH2xUhqoTbsdp2oHl8kLYFA)

## Arduino Nano R3 Pinout
![Arduino Nano R3 Pinout](https://diyi0t.com/wp-content/uploads/2019/08/Arduino-Nano-Pinout-1.png)

## Arduino Nano R3 Power Supply

The Nano has one 3.3V and two 5V power pins of which one is the VIN pin. With the VIN pin you can
supply the Arduino Nano with a voltage between 7V-12V to run the microcontroller on battery for
example. All three power pins provide a maximum currency of 50 mA. You can close the circuit with
two ground pins.

![Arduino Nano R3 Power Supply](https://diyi0t.com/wp-content/uploads/2019/08/Arduino-Nano-voltage-current-overview.png)

# language Wiring
 - [Wiring manual](http://wiring.org.co/learning/basics/blink.html)

 Wiring je programovací jazyk vytvořený pro programování mikrokontroléru bez specifických znalostí
 hardware. V současné době je nejznámější jako součást open-source platformy Arduino, kde má podobu
 frameworku v jazyce C++. [wiki](https://cs.wikipedia.org/wiki/Wiring_(programovac%C3%AD_jazyk))

 Program v jazyce Wiring se nazývá sketch a typicky má dvě hlavní části:

 - ```setup()``` - funkce, která se spustí jednou na začátku programu a zpravidla obsahuje počáteční nastavení.
 - ```loop()```  - automaticky opakovaně volaná funkce, když je deska Arduino připojena k napájení.
 
```C
void setup()
{
  pinMode(WLED, OUTPUT);  // set pin as output
}

void loop()
{
  digitalWrite(WLED, HIGH);  // set the LED on
  delay(1000);               // wait for a second
  digitalWrite(WLED, LOW);   // set the LED off
  delay(1000);               // wait for a second
}
```
