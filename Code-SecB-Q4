const int pot = A1, l1 = 2, btn = 4;
bool last = 1;

void setup() {
  pinMode(l1, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int t = map(analogRead(pot), 0, 1023, 1, 9);
  bool cur = digitalRead(btn);

  if (last && !cur) {
    delay(200);

    Serial.println("Starting timer..");

    for (int i = t; i >= 0; i--) {
      Serial.println(i);
      delay(1000);
    }

    Serial.println("Timer Done");
    digitalWrite(l1, 1);
    delay(2000);
    digitalWrite(l1, 0);
  }

  last = cur;
}
