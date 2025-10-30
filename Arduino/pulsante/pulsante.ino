int pinLed = 13;
int tempo = 1000;
int buttonPin = 10; 

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH){
      digitalWrite(pinLed, !digitalRead(pinLed));
      while(digitalRead(buttonPin) == HIGH){
      }
  }
}
