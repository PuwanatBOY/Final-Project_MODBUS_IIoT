BLYNK_WRITE(V1)
{
  Serial.print("Got a value: ");
  Serial.println(param.asInt());

  if (param.asInt() == 0)
  {
    node1.writeSingleCoil(0, 0);
    Serial.println("relay 0 on V1: off");
  }
  if (param.asInt() == 1)
  {
    node1.writeSingleCoil(0, 1);
    Serial.println("relay 0 on V1: on");
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
  }
  if (param.asInt() == 1)
  {
    node1.writeSingleCoil(1, 1);
    Serial.println("relay 1 on V2: on");
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
  }
  if (param.asInt() == 1)
  {
    node1.writeSingleCoil(2, 1);
    Serial.println("relay 2 on V3: on");
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
  }
  if (param.asInt() == 1)
  {
    node1.writeSingleCoil(3, 1);
    Serial.println("relay 3 on V4: on");
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
    Serial.println("All 4 relay on V14: off");
  }
  if (param.asInt() == 1)
  {
    for (int i = 0; i <= 3; i++) {
      node1.writeSingleCoil(i, 1); // On Relay
    }
    Serial.println("All 4 relay on V14: on");
  }
}
