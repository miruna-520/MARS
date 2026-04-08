const int led = 9, btn = 2;
unsigned long t;
bool on = false;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  if (!on) {
    delay(random(2000, 5000));
    Serial.println("Get Ready..");
    digitalWrite(led, HIGH);
    t = millis();
    on = true;
  }

  if (on && !digitalRead(btn)) {
    Serial.print("Reaction Time: ");
    Serial.print(millis() - t);
    Serial.println(" ms");

    digitalWrite(led, LOW);
    on = false;
    delay(1000);
  }
}
