const int potPins[4] = {A0, A1, A2,A3};
const int ledPins[4] = {9, 10, 11,3};
int values[4];

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 4; i++) {
    values[i] = analogRead(potPins[i]);
    values[i] = map(values[i], 0, 1023, 0, 255);
    analogWrite(ledPins[i], values[i]);
  }

  delay(10);
  
}
