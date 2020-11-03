void Mode1_Task(void *p) {
  pinMode(ledMode, OUTPUT);
  while (1) {
    digitalWrite(ledMode, LOW);
    delay(100);
    digitalWrite(ledMode, HIGH);
    delay(100);
    digitalWrite(ledMode, LOW);
    delay(100);
    digitalWrite(ledMode, HIGH);
    delay(1000);
  }
}

void Mode2_Task(void *p) {
  pinMode(ledMode, OUTPUT);
  while (1) {
    digitalWrite(ledMode, !digitalRead(ledMode));
    delay(500);
  }
}
