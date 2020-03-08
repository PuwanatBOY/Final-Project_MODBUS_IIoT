BLYNK_WRITE(V1)
{
  Serial.print("Got a value: ");
  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node1.writeSingleCoil(0, 0);
    Serial.println("relay 0 on V1: off");
    count4r--;
  }
  if (param.asInt() == 1)
  {
    node1.writeSingleCoil(0, 1);
    Serial.println("relay 0 on V1: on");
    count4r++;
  }
}

BLYNK_WRITE(V2)
{
  Serial.print("Got a value: ");
  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node1.writeSingleCoil(1, 0);
    Serial.println("relay 1 on V2: off");
    count4r--;
  }
  if (param.asInt() == 1)
  {
    node1.writeSingleCoil(1, 1);
    Serial.println("relay 1 on V2: on");
    count4r++;
  }
}

BLYNK_WRITE(V3)
{
  Serial.print("Got a value: ");
  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node1.writeSingleCoil(2, 0);
    Serial.println("relay 2 on V3: off");
    count4r--;
  }
  if (param.asInt() == 1)
  {
    node1.writeSingleCoil(2, 1);
    Serial.println("relay 2 on V3: on");
    count4r++;
  }
}

BLYNK_WRITE(V4)
{
  Serial.print("Got a value: ");
  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node1.writeSingleCoil(3, 0);
    Serial.println("relay 3 on V4: off");
    count4r--;
  }
  if (param.asInt() == 1)
  {
    node1.writeSingleCoil(3, 1);
    Serial.println("relay 3 on V4: on");
    count4r++;
  }
}

BLYNK_WRITE(V14)
{
  Serial.print("Got a value: ");
  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    for (int i = 0; i <= 3; i++) {
      node1.writeSingleCoil(i, 0); // Off Relay
    }
    Blynk.virtualWrite(V1, LOW);
    Blynk.virtualWrite(V2, LOW);
    Blynk.virtualWrite(V3, LOW);
    Blynk.virtualWrite(V4, LOW);
    Serial.println("All 4 relay on V14: off");
  }
  if (param.asInt() == 1)
  {
    for (int i = 0; i <= 3; i++) {
      node1.writeSingleCoil(i, 1); // On Relay
    }
    Blynk.virtualWrite(V1, HIGH);
    Blynk.virtualWrite(V2, HIGH);
    Blynk.virtualWrite(V3, HIGH);
    Blynk.virtualWrite(V4, HIGH);
    Serial.println("All 4 relay on V14: on");
  }
}
