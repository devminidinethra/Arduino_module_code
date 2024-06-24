bool buttonPressed = false;

void setup()
{
  pinMode(12, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  digitalWrite(2, HIGH); // Turn on LED number 2 initially
  digitalWrite(9, HIGH); // Turn on LED number 9 initially
}

void loop()
{
  if (digitalRead(12) == LOW) {
    buttonPressed = true; // Set the flag when the button is pressed
  }

  if (buttonPressed) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    delay(20000); // Green LED lighted for 20 seconds

    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    delay(10000); // Yellow LED lighted for 10 seconds

    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(25000); // Red LED lighted for 25 seconds

    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    delay(20000); // Green LED lighted for 20 seconds

  }
}