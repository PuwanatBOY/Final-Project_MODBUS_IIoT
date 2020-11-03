void preTransmission() {
  digitalWrite(MAX485_Monitor, 1);
  digitalWrite(MAX485_Ctrl, 1);
}
void postTransmission() {
  digitalWrite(MAX485_Monitor, 0);
  digitalWrite(MAX485_Ctrl, 0);
}
void setup_0() {
  //=========================================
  pinMode(MAX485_Monitor, OUTPUT);
  pinMode(MAX485_Ctrl, OUTPUT);
  Serial2.begin(9600, SERIAL_8N1, MAX485_Rx, MAX485_Tx);
  postTransmission(); // Init in receive mode
  //====================[Sensor]================================
  String IdSensor1 = EEPROM.readString(130);
  if (IdSensor1 != "500") {
    Serial.println("Device ID 11 Ready!");
    sensorR_1 = 1;
    idSensor1 = IdSensor1.toInt();
    node11.begin(idSensor1, Serial2); // Modbus slave ID 11
    node11.preTransmission(preTransmission);
    node11.postTransmission(postTransmission);
  }
  String IdSensor2 = EEPROM.readString(135);
  if (IdSensor2 != "500") {
    Serial.println("Device ID 12 Ready!");
    sensorR_2 = 1;
    idSensor2 = IdSensor2.toInt();
    node12.begin(idSensor2, Serial2); // Modbus slave ID 12
    node12.preTransmission(preTransmission);
    node12.postTransmission(postTransmission);
  }
  String IdSensor3 = EEPROM.readString(140);
  if (IdSensor3 != "500") {
    Serial.println("Device ID 13 Ready!");
    sensorR_3 = 1;
    idSensor3 = IdSensor3.toInt();
    node13.begin(idSensor3, Serial2); // Modbus slave ID 13
    node13.preTransmission(preTransmission);
    node13.postTransmission(postTransmission);
  }
  String IdSensor4 = EEPROM.readString(145);
  if (IdSensor4 != "500") {
    Serial.println("Device ID 14 Ready!");
    sensorR_4 = 1;
    idSensor4 = IdSensor4.toInt();
    node14.begin(idSensor4, Serial2); // Modbus slave ID 14
    node14.preTransmission(preTransmission);
    node14.postTransmission(postTransmission);
  }
  String IdSensor5 = EEPROM.readString(150);
  if (IdSensor5 != "500") {
    Serial.println("Device ID 15 Ready!");
    sensorR_5 = 1;
    idSensor5 = IdSensor5.toInt();
    node15.begin(idSensor5, Serial2); // Modbus slave ID 15
    node15.preTransmission(preTransmission);
    node15.postTransmission(postTransmission);
  }
  String IdSensor6 = EEPROM.readString(155);
  if (IdSensor6 != "500") {
    Serial.println("Device ID 15 Ready!");
    sensorR_6 = 1;
    idSensor6 = IdSensor6.toInt();
    node16.begin(idSensor6, Serial2); // Modbus slave ID 15
    node16.preTransmission(preTransmission);
    node16.postTransmission(postTransmission);
  }

  //======================[Relay 4]==============================
  String IdRelayF1 = EEPROM.readString(160);
  if (IdRelayF1 != "500") {
    Serial.println("Device ID 21 Ready!");
    relay4_sw1 = 1;
    idRelay41 = IdRelayF1.toInt();
    node21.begin(idRelay41, Serial2); // Modbus slave ID 21
    node21.preTransmission(preTransmission);
    node21.postTransmission(postTransmission);
  }
  String IdRelayF2 = EEPROM.readString(165);
  if (IdRelayF2 != "500") {
    Serial.println("Device ID 22 Ready!");
    relay4_sw2 = 1;
    idRelay42 = IdRelayF2.toInt();
    node22.begin(idRelay42, Serial2); // Modbus slave ID 22
    node22.preTransmission(preTransmission);
    node22.postTransmission(postTransmission);
  }
  String IdRelayF3 = EEPROM.readString(170);
  if (IdRelayF3 != "500") {
    Serial.println("Device ID 23 Ready!");
    relay4_sw3 = 1;
    idRelay43 = IdRelayF3.toInt();
    node23.begin(idRelay43, Serial2); // Modbus slave ID 23
    node23.preTransmission(preTransmission);
    node23.postTransmission(postTransmission);
  }
  String IdRelayF4 = EEPROM.readString(175);
  if (IdRelayF4 != "500") {
    Serial.println("Device ID 24 Ready!");
    relay4_sw4 = 1;
    idRelay44 = IdRelayF4.toInt();
    node24.begin(idRelay44, Serial2); // Modbus slave ID 24
    node24.preTransmission(preTransmission);
    node24.postTransmission(postTransmission);
  }
  String IdRelayF5 = EEPROM.readString(180);
  if (IdRelayF5 != "500") {
    Serial.println("Device ID 25 Ready!");
    relay4_sw5 = 1;
    idRelay45 = IdRelayF5.toInt();
    node25.begin(idRelay45, Serial2); // Modbus slave ID 25
    node25.preTransmission(preTransmission);
    node25.postTransmission(postTransmission);
  }
  String IdRelayF6 = EEPROM.readString(185);
  if (IdRelayF6 != "500") {
    Serial.println("Device ID 26 Ready!");
    relay4_sw6 = 1;
    idRelay46 = IdRelayF6.toInt();
    node26.begin(idRelay46, Serial2); // Modbus slave ID 26
    node26.preTransmission(preTransmission);
    node26.postTransmission(postTransmission);
  }

  //======================[Relay 8]==============================
  String IdRelayE1 = EEPROM.readString(190);
  if (IdRelayE1 != "500") {
    Serial.println("Device ID 31 Ready!");
    idRelay81 = IdRelayE1.toInt();
    node31.begin(idRelay81, Serial2); // Modbus slave ID 31
    node31.preTransmission(preTransmission);
    node31.postTransmission(postTransmission);
  }
  String IdRelayE2 = EEPROM.readString(195);
  if (IdRelayE2 != "500") {
    Serial.println("Device ID 32 Ready!");
    idRelay82 = IdRelayE2.toInt();
    node32.begin(idRelay82, Serial2); // Modbus slave ID 32
    node32.preTransmission(preTransmission);
    node32.postTransmission(postTransmission);
  }
  String IdRelayE3 = EEPROM.readString(200);
  if (IdRelayE3 != "500") {
    Serial.println("Device ID 33 Ready!");
    idRelay83 = IdRelayE3.toInt();
    node33.begin(idRelay83, Serial2); // Modbus slave ID 33
    node33.preTransmission(preTransmission);
    node33.postTransmission(postTransmission);
  }
  String IdRelayE4 = EEPROM.readString(205);
  if (IdRelayE4 != "500") {
    Serial.println("Device ID 34 Ready!");
    idRelay84 = IdRelayE4.toInt();
    node34.begin(idRelay84, Serial2); // Modbus slave ID 34
    node34.preTransmission(preTransmission);
    node34.postTransmission(postTransmission);
  }
  String IdRelayE5 = EEPROM.readString(210);
  if (IdRelayE5 != "500") {
    Serial.println("Device ID 35 Ready!");
    idRelay85 = IdRelayE5.toInt();
    node35.begin(idRelay85, Serial2); // Modbus slave ID 35
    node35.preTransmission(preTransmission);
    node35.postTransmission(postTransmission);
  }
  String IdRelayE6 = EEPROM.readString(215);
  if (IdRelayE6 != "500") {
    Serial.println("Device ID 36 Ready!");
    idRelay86 = IdRelayE6.toInt();
    node36.begin(idRelay86, Serial2); // Modbus slave ID 36
    node36.preTransmission(preTransmission);
    node36.postTransmission(postTransmission);
  }
}
