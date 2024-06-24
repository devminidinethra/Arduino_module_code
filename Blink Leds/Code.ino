// C++ code
//
int ledPin1=2;
int ledPin2=3;
int ledPin3=4;
void setup()
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop()
{
  digitalWrite(ledPin1, HIGH);
  delay(50); // Wait for 1000 millisecond(s)
  digitalWrite(ledPin1, LOW);
  delay(50); // Wait for 1000 millisecond(s)
  
  digitalWrite(ledPin2, HIGH);
  delay(50); // Wait for 1000 millisecond(s)
  digitalWrite(ledPin2, LOW);
  delay(50); // Wait for 1000 millisecond(s)
  
  digitalWrite(ledPin3, HIGH);
  delay(50); // Wait for 1000 millisecond(s)
  digitalWrite(ledPin3, LOW);
  delay(50); // Wait for 1000 millisecond(s)
}