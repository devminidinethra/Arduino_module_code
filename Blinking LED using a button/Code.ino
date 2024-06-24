const int buttonPin = 2;     // the number of the pushbutton pin
const int greenLedPin = 13;   // the number of the green LED pin
const int yellowLedPin = 12;  // the number of the yellow LED pin
const int redLedPin = 11;     // the number of the red LED pin

int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pins as outputs
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  
  // initialize the button pin as input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed
  if (buttonState == HIGH) {
    // turn LED on and off with a delay when button is pressed
    digitalWrite(greenLedPin, HIGH);
    delay(500);
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    delay(500);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
    delay(500);
    digitalWrite(redLedPin, LOW);
  } else {
    // turn all LEDs off when button is not pressed
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, LOW);
  }
}
