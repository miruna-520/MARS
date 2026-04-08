const int leds[] = {2, 3, 4};
const long intervals[] = {500, 1000, 1500};

unsigned long prevMillis[] = {0, 0, 0};
bool ledStates[] = {LOW, LOW, LOW};

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  unsigned long currentMillis = millis();

  for (int i = 0; i < 3; i++) {
    if (currentMillis - prevMillis[i] >= intervals[i]) {
      prevMillis[i] = currentMillis;
      ledStates[i] = !ledStates[i];
      digitalWrite(leds[i], ledStates[i]);
    }
  }
}
