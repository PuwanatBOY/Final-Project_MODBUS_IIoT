BLYNK_WRITE(V1)
{
  //  Serial.print("Got a value: ");
  //  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node1.writeSingleCoil(0, 0);
    //Serial.println("relay 0 on V1: off");
    count4r -= 1;
  }
  if (param.asInt() == 1)
  {
    node1.writeSingleCoil(0, 1);
    //Serial.println("relay 0 on V1: on");
    count4r += 1;
  }
  Check4Relay();
}

BLYNK_WRITE(V2)
{
  //  Serial.print("Got a value: ");
  //  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node1.writeSingleCoil(1, 0);
    //Serial.println("relay 1 on V2: off");
    count4r -= 1;
  }
  if (param.asInt() == 1)
  {
    node1.writeSingleCoil(1, 1);
    //Serial.println("relay 1 on V2: on");
    count4r += 1;
  }
  Check4Relay();
}

BLYNK_WRITE(V3)
{
  //  Serial.print("Got a value: ");
  //  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node1.writeSingleCoil(2, 0);
    //Serial.println("relay 2 on V3: off");
    count4r -= 1;
  }
  if (param.asInt() == 1)
  {
    node1.writeSingleCoil(2, 1);
    //Serial.println("relay 2 on V3: on");
    count4r += 1;
  }
  Check4Relay();
}

BLYNK_WRITE(V4)
{
  //  Serial.print("Got a value: ");
  //  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node1.writeSingleCoil(3, 0);
    //Serial.println("relay 3 on V4: off");
    count4r -= 1;
  }
  if (param.asInt() == 1)
  {
    node1.writeSingleCoil(3, 1);
    //Serial.println("relay 3 on V4: on");
    count4r += 1;
  }
  Check4Relay();
}

BLYNK_WRITE(V14)
{
  //  Serial.print("Got a value: ");
  //  Serial.println(param.asInt());
  if (param.asInt() == 0)
  {
    for (int i = 0; i <= 3; i++) {
      node1.writeSingleCoil(i, 0); // Off Relay
      if (i == 0) {
        Blynk.virtualWrite(V1, LOW);
      } else if (i == 1) {
        Blynk.virtualWrite(V2, LOW);
      } else if (i == 2) {
        Blynk.virtualWrite(V3, LOW);
      } else if (i == 3) {
        Blynk.virtualWrite(V4, LOW);
      }
      delay(100);
    }
    //Serial.println("All 4 relay on V14: off");
    count4r = 0;
  }
  if (param.asInt() == 1)
  {
    for (int i = 0; i <= 3; i++) {
      node1.writeSingleCoil(i, 1); // On Relay
      if (i == 0) {
        Blynk.virtualWrite(V1, HIGH);
      } else if (i == 1) {
        Blynk.virtualWrite(V2, HIGH);
      } else if (i == 2) {
        Blynk.virtualWrite(V3, HIGH);
      } else if (i == 3) {
        Blynk.virtualWrite(V4, HIGH);
      }
      delay(100);
    }
    //Serial.println("All 4 relay on V14: on");
    count4r = 4;
  }
}

void Check4Relay() {
  if (count4r == 4) {
    Blynk.virtualWrite(V14, HIGH);
  } else {
    Blynk.virtualWrite(V14, LOW);
  }
}
