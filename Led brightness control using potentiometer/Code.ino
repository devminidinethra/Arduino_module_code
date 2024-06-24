int led1 = 12;
int led2 = 9;
int led3 = 7;
int pot = A0;
int inputval = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(pot, INPUT);
  
  // Read initial potentiometer value to set initial LED brightness
  inputval = analogRead(pot);
  analogWrite(led1, inputval / 4);
  analogWrite(led2, inputval / 4);
  analogWrite(led3, inputval / 4);
}

void loop() {
  inputval = analogRead(pot);
  analogWrite(led1, inputval / 4);
  analogWrite(led2, inputval / 4);
  analogWrite(led3, inputval / 4);
  
  delay(100);
}