int pirPin = 2;   
int buzzerPin = 8; 
int ledPin = 13;   

void setup()
{
  pinMode(pirPin, INPUT);     
  pinMode(buzzerPin, OUTPUT); 
  pinMode(ledPin, OUTPUT);    
}

void loop() {
  int pirState = digitalRead(pirPin);

  if (pirState == HIGH) {
    
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(200); 
    
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
    delay(200);
  } 
  else {
    
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }
}