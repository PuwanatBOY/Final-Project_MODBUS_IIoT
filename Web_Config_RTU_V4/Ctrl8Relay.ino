BLYNK_WRITE(V5)
{
  //  Serial.print("Got a value: ");
  //  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node8.writeSingleRegister(1, 0x0200);
    //Serial.println("relay 1 on V5: off");
    count8r -= 1;
  }
  if (param.asInt() == 1)
  {
    node8.writeSingleRegister(1, 0x0100);
    //Serial.println("relay 1 on V5: on");
    count8r += 1;
  }
  Check8Relay();
}

BLYNK_WRITE(V6)
{
  //  Serial.print("Got a value: ");
  //  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node8.writeSingleRegister(2, 0x0200);
    //Serial.println("relay 2 on V6: off");
    count8r -= 1;
  }
  if (param.asInt() == 1)
  {
    node8.writeSingleRegister(2, 0x0100);
    //Serial.println("relay 2 on V6: on");
    count8r += 1;
  }
  Check8Relay();
}

BLYNK_WRITE(V7)
{
  //  Serial.print("Got a value: ");
  //  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node8.writeSingleRegister(3, 0x0200);
    //Serial.println("relay 3 on V7: off");
    count8r -= 1;
  }
  if (param.asInt() == 1)
  {
    node8.writeSingleRegister(3, 0x0100);
    //Serial.println("relay 3 on V7: on");
    count8r += 1;
  }
  Check8Relay();
}

BLYNK_WRITE(V8)
{
  //  Serial.print("Got a value: ");
  //  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node8.writeSingleRegister(4, 0x0200);
    //Serial.println("relay 4 on V8: off");
    count8r -= 1;
  }
  if (param.asInt() == 1)
  {
    node8.writeSingleRegister(4, 0x0100);
    //Serial.println("relay 4 on V8: on");
    count8r += 1;
  }
  Check8Relay();
}

BLYNK_WRITE(V9)
{
  //  Serial.print("Got a value: ");
  //  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node8.writeSingleRegister(5, 0x0200);
    //Serial.println("relay 5 on V9: off");
    count8r -= 1;
  }
  if (param.asInt() == 1)
  {
    node8.writeSingleRegister(5, 0x0100);
    //Serial.println("relay 5 on V9: on");
    count8r += 1;
  }
  Check8Relay();
}

BLYNK_WRITE(V10)
{
  //  Serial.print("Got a value: ");
  //  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node8.writeSingleRegister(6, 0x0200);
    // Serial.println("relay 6 on V10: off");
    count8r -= 1;
  }
  if (param.asInt() == 1)
  {
    node8.writeSingleRegister(6, 0x0100);
    //Serial.println("relay 6 on V10: on");
    count8r += 1;
  }
  Check8Relay();
}

BLYNK_WRITE(V11)
{
  //  Serial.print("Got a value: ");
  //  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node8.writeSingleRegister(7, 0x0200);
    //Serial.println("relay 7 on V11: off");
    count8r -= 1;
  }
  if (param.asInt() == 1)
  {
    node8.writeSingleRegister(7, 0x0100);
    //Serial.println("relay 7 on V11: on");
    count8r += 1;
  }
  Check8Relay();
}

BLYNK_WRITE(V12)
{
  //Serial.print("Got a value: ");
  //Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node8.writeSingleRegister(8, 0x0200);
    //Serial.println("relay 8 on V12: off");
    count8r -= 1;
  }
  if (param.asInt() == 1)
  {
    node8.writeSingleRegister(8, 0x0100);
    //Serial.println("relay 8 on V12: on");
    count8r += 1;
  }
  Check8Relay();
}

BLYNK_WRITE(V13)
{
  //  Serial.print("Got a value: ");
  //  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    for (int j = 1; j <= 8; j++) {
      node8.writeSingleRegister(j, 0x0200); // Off Relay
      if (j == 1) {
        Blynk.virtualWrite(V5, LOW);
      } else if (j == 2) {
        Blynk.virtualWrite(V6, LOW);
      } else if (j == 3) {
        Blynk.virtualWrite(V7, LOW);
      } else if (j == 4) {
        Blynk.virtualWrite(V8, LOW);
      } else if (j == 5) {
        Blynk.virtualWrite(V9, LOW);
      } else if (j == 6) {
        Blynk.virtualWrite(V10, LOW);
      } else if (j == 7) {
        Blynk.virtualWrite(V11, LOW);
      } else if (j == 8) {
        Blynk.virtualWrite(V12, LOW);
      }
      delay(100);
    }
    //Serial.println("All 8 relay on V13: off");
    count8r = 0;
  }
  if (param.asInt() == 1)
  {
    for (int j = 1; j <= 8; j++) {
      node8.writeSingleRegister(j, 0x0100); // On Relay
      if (j == 1) {
        Blynk.virtualWrite(V5, HIGH);
      } else if (j == 2) {
        Blynk.virtualWrite(V6, HIGH);
      } else if (j == 3) {
        Blynk.virtualWrite(V7, HIGH);
      } else if (j == 4) {
        Blynk.virtualWrite(V8, HIGH);
      } else if (j == 5) {
        Blynk.virtualWrite(V9, HIGH);
      } else if (j == 6) {
        Blynk.virtualWrite(V10, HIGH);
      } else if (j == 7) {
        Blynk.virtualWrite(V11, HIGH);
      } else if (j == 8) {
        Blynk.virtualWrite(V12, HIGH);
      }
      delay(100);
    }
    //Serial.println("All 8 relay on V13: on");
    count8r = 8;
  }
}

void Check8Relay() {
  if (count8r == 8) {
    Blynk.virtualWrite(V13, HIGH);
  } else {
    Blynk.virtualWrite(V13, LOW);
  }
}
