/*
 * Arduino Tutorial: Using Potentiometer Control LED Light

 * Here introduces the Arduino analog input function, which controls the brightness of the LED light
 * by reading input voltage values through a potentiometer.
 */

// https://create.arduino.cc/projecthub/wieselly/arduino-tutorial-using-potentiometer-control-led-light-0dbbd1?ref=part&ref_id=11332&offset=25

int ledPin = 13;
int readValue = 0;
int ledValue  = 0; 

void setup(){
  pinMode(ledPin, OUTPUT);
}

void loop() {
  readValue = analogRead(PIN_A2);
  ledValue = map(readValue, 0,1024, 0, 255);
  analogWrite(ledPin, ledValue);
}