# Grove RGB LED Stick - RGB LED pásek 10 x WS2813 Mini 3535

Pás obsahuje 10 individuálně adresovaných RGB LED Mini 3535 WS2813 s integrovaným ovladačem.
Ovládání LED diody na pásku pouze se zajištuje jedním signálním vodičem. LED diody jsou umístěny ve
stejných vzdálenostech na desce o délce 83 mm. Každý z nich spotřebovává proud až 16 mA, což v
tomto případě dává celkovou hodnotu přibližně 160 mA. Řetěz může být napájen napětím v rozmezí od
3,3 V do 5 V.

## Hardware Overview
![pinout](https://files.seeedstudio.com/wiki/Grove-RGB_LED_Stick-10-WS2813_Mini/img/pin_out.jpg)


**Funkce**
- WS2813B IC, 3535 LED.
- Inteligentní ochrana proti zpětnému připojení.
- Úroveň šedé každého pixelu je 256, což poskytuje plnobarevný displej 256 * 256 * 256 = 16777216.
- Obnovovací frekvence je 2KHz.
- Kaskádové sériové rozhraní, příjem dat a dekódování závisí pouze na jedné signální lince

![RGB test](https://cdn3.botland.cz/img/art/inne/13662_5.gif)

## Software

1.  Install library **Library_Strip** to install library for Arduino + RESTART IDE!
    
    a.  Open it directly in the Arduino IDE via the path: File → Examples → Adafruit_Neopixel → simple.

      ![NeoPixel](https://files.seeedstudio.com/wiki/Grove-RGB_LED_Stick-10-WS2813_Mini/img/path1.jpg)

    b. Open it in your computer by click the simple.ino which you can find in the folder:

       __c:\Users\z0037rdx\Documents\Arduino\libraries\Adafruit_NeoPixel\examples\simple\simple.ino__  