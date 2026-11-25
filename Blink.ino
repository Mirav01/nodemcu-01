int i = 5;
int myDelay = 50;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  while (i > 0) {
    digitalWrite(LED_BUILTIN, LOW);
    delay(myDelay);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(myDelay);
    i--;
  }

  delay(2000);
  i = 5;
}
