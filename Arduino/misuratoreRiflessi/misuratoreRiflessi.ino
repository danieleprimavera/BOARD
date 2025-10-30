int pinLed = 13;
int tempo = 1000;
int buttonPin = 10;
float a; 

void setup() {
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    delay(random(1000, 5300));
    digitalWrite(pinLed, HIGH);
    a=0;
    while(digitalRead(buttonPin)==LOW){
      a++;
      delay(1);
    }
    Serial.print("Hai premuto il pulsante in: "), Serial.print(a), Serial.print(" millisecondi\n");
    digitalWrite(pinLed, LOW);
}