const int ledPin = 7;

void setup() {

  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW):
  delay(500);
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, LOW);
    delay(100); 
    digitalWrite(ledPin, HIGH);
    delay(100);  
  }

 
  digitalWrite(ledPin, HIGH);
  delay(1000);

  while (true) {
  }
}
