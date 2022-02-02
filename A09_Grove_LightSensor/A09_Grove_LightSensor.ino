const int  led_pin = PIN6;

void setup(){
    Serial.begin(115200); 
    Serial.println("DHTxx test!");

    pinMode(led_pin, OUTPUT);
}

void loop(){
  // read the input on analog pin 0:
  int sensorVal = analogRead(PIN_A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorVal * (5.0 / 1023.0);
  int val = map(sensorVal, 0, 500, 0, 255);
  // the default PWM resolution
  analogWrite(led_pin, 255-val);
  // print out the value you read:
  Serial.println(val, DEC);

  delay(500);
} 