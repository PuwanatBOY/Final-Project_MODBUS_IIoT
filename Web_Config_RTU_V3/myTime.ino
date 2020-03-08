void myTimeEvent() {
  uint8_t result;
  uint8_t result2;
  uint16_t data[6];
  result = node1.readDiscreteInputs(0x0000, 4);
  if (result == node1.ku8MBSuccess) {
    //================== state 1 ===============================
    if (node1.getResponseBuffer(0x00) == 1 && ww == 0) {
      led1.on();
      ww = 1;
    } else if (node1.getResponseBuffer(0x00) == 1 && ww == 1) {
      led1.off();
      ww = 0;
    }
    //================== state 2 ===============================
    else if (node1.getResponseBuffer(0x00) == 2 && xx == 0) {
      led2.on();
      xx = 1;
    } else if (node1.getResponseBuffer(0x00) == 2 && xx == 1) {
      led2.off();
      xx = 0;
    }
    //================== state 3 ===============================
    else if (node1.getResponseBuffer(0x00) == 4 && yy == 0) {
      led3.on();
      yy = 1;
    } else if (node1.getResponseBuffer(0x00) == 4 && yy == 1) {
      led3.off();
      yy = 0;
    }
    //================== state 4 ===============================
    else if (node1.getResponseBuffer(0x00) == 8 && zz == 0) {
      led4.on();
      zz = 1;
    } else if (node1.getResponseBuffer(0x00) == 8 && zz == 1) {
      led4.off();
      zz = 0;
    }
  }
//  if (count4r == 4) {
//    Blynk.virtualWrite(V14, HIGH);
//  }else{
//    Blynk.virtualWrite(V14, LOW);
//  }
//  if (count8r == 8) {
//    Blynk.virtualWrite(V13, HIGH);
//  }else{
//    Blynk.virtualWrite(V13, LOW);
//  }
  
  if (result2 == node2.ku8MBSuccess and millis() - previousMillis >= 20000) {
    previousMillis = millis();
    result2 = node2.readHoldingRegisters(0x0000, 2);
    Serial.print("Tempp(C)= "); Serial.println(node2.getResponseBuffer(0x00) / 10.0f);
    Serial.print("Humid(%)= "); Serial.println(node2.getResponseBuffer(0x01) / 10.0f);
    temp = node2.getResponseBuffer(0x00) / 10.0f;
    humi = node2.getResponseBuffer(0x01) / 10.0f;
    Blynk.virtualWrite(V30, temp);
    Blynk.virtualWrite(V31, humi);
  }
}
