// set pin numbers:
const int buttonPin = 6;  // pushbutton pin
const int ledPin    = 13; // built-in LED pin

// variable for reading the pushbutton status
int buttonState = 0;         

// the setup routine is started once after 
// pressing the reset button:
void setup() {
  Serial.begin(9600);
  // init the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // init the button pin as an input:
  pinMode(buttonPin, INPUT);
}

//the loop routine runs forever:
void loop() {
  // read the state of the pushbutton value: 
  buttonState = digitalRead(buttonPin);
  // Show the state of pushbutton on serial monitor
  Serial.println(buttonState);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
  // Added the delay so that we can see the output of button
  delay(100);
}