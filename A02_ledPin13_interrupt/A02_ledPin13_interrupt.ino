const byte ledPin = 13;  // LED_BUILTIN
const byte interruptPin = 2;
volatile byte state = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink1, CHANGE);

}

void loop() {
  digitalWrite(ledPin, state);
}

void blink1() {
  state = !state;
}
