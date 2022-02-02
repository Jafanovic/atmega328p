const int  led_pin = PIN_A6;

void setup(){
    Serial.begin(115200); 
    Serial.println("DHTxx test!");

    pinMode(led_pin, OUTPUT);
}

void loop(){
  // read the input on analog pin 0:
  int sensorVal = analogRead(PIN_A0);
  // print out the value you read:
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorVal * (5.0 / 1023.0);
  // Serial.println(sensorVal, DEC);
   // the default PWM resolution
  //analogWriteResolution(8);
  //analogWrite(led_pin, map(sensorVal, 0, 1023, 0, 255));
  analogWrite(led_pin, 125);

  // delay(500);
} 