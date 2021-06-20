const byte led2_a = 6;
const byte led2_b = 7;
const byte led2_c = 8;
const byte led2_d = 5;
const byte led2_e = 4;
const byte led2_f = PIN_A5;
const byte led2_g = PIN_A4;
const byte led2_dp = 9;

const byte interruptPin = 2;
volatile byte state = LOW;

void setup() {
  pinMode(led2_a,  OUTPUT);  
  pinMode(led2_b,  OUTPUT);     
  pinMode(led2_c,  OUTPUT); 
  pinMode(led2_d,  OUTPUT);
  pinMode(led2_e,  OUTPUT); 
  pinMode(led2_f,  OUTPUT); 
  pinMode(led2_g,  OUTPUT);
  pinMode(led2_dp, OUTPUT); 
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink1, CHANGE);

}

void loop() {
  digitalWrite(led2_a, state);
  digitalWrite(led2_b, state);   
  digitalWrite(led2_c, state);
  digitalWrite(led2_d, state);
  digitalWrite(led2_e, state);
  digitalWrite(led2_f, state);
  digitalWrite(led2_g, state);
  digitalWrite(led2_dp, state);
}

void blink1() {
  state = !state;
}
