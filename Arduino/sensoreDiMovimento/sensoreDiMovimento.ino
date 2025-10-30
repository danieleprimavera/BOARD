void setup() {
  pinMode (9, OUTPUT);
  pinMode(3, INPUT);
}

void loop() {
  if (digitalRead(3)== HIGH){
  digitalWrite (9, LOW);
  delay(500);
  digitalWrite(9, HIGH);
  delay(100);
  }else  {
    digitalWrite (9, LOW);
  }
}

