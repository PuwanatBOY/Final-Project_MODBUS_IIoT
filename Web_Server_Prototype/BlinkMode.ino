void Mode1_Task(void *p) {
  pinMode(ledMode, OUTPUT);
  while (1) {
    digitalWrite(ledMode, HIGH);
    delay(300);
    digitalWrite(ledMode, LOW);
    delay(300);
    digitalWrite(ledMode, HIGH);
    delay(300);
    digitalWrite(ledMode, LOW);
    delay(700);
  }
}

void Mode2_Task(void *p) {
  pinMode(ledMode, OUTPUT);
  while (1) {
    digitalWrite(ledMode, !digitalRead(ledMode));
    delay(500);
  }
}
