WidgetLED led101(V17); WidgetLED led201(V18); WidgetLED led301(V19); WidgetLED led401(V20);
WidgetLED led102(V37); WidgetLED led202(V38); WidgetLED led302(V39); WidgetLED led402(V40);
WidgetLED led103(V57); WidgetLED led203(V58); WidgetLED led303(V59); WidgetLED led403(V56);
WidgetLED led104(V77); WidgetLED led204(V78); WidgetLED led304(V79); WidgetLED led404(V80);
WidgetLED led105(V97); WidgetLED led205(V98); WidgetLED led305(V99); WidgetLED led405(V100);
WidgetLED led106(V117); WidgetLED led206(V118); WidgetLED led306(V119); WidgetLED led406(V120);

void ReadSW() {
  uint8_t result1, result2, result3, result4, result5, result6;

  //**************************************[Device 1]**************************************
  if (relay4_sw1 == 1) {
    result1 = node21.readDiscreteInputs(0x0000, 4);
    if (result1 == node21.ku8MBSuccess) {
      if (node21.getResponseBuffer(0x00) == 1) {
        led401.off(); led301.off(); led201.off(); led101.on();
      } else if (node21.getResponseBuffer(0x00) == 2) {
        led401.off(); led301.off(); led201.on(); led101.off();
      } else if (node21.getResponseBuffer(0x00) == 3) {
        led401.off(); led301.off(); led201.on(); led101.on();
      } else if (node21.getResponseBuffer(0x00) == 4) {
        led401.off(); led301.on(); led201.off(); led101.off();
      } else if (node21.getResponseBuffer(0x00) == 5) {
        led401.off(); led301.on(); led201.off(); led101.on();
      } else if (node21.getResponseBuffer(0x00) == 6) {
        led401.off(); led301.on(); led201.on(); led101.off();
      } else if (node21.getResponseBuffer(0x00) == 7) {
        led401.off(); led301.on(); led201.on(); led101.on();
      } else if (node21.getResponseBuffer(0x00) == 8) {
        led401.on(); led301.off(); led201.off(); led101.off();
      } else if (node21.getResponseBuffer(0x00) == 9) {
        led401.on(); led301.off(); led201.off(); led101.on();
      } else if (node21.getResponseBuffer(0x00) == 0x0a) {
        led401.on(); led301.off(); led201.on(); led101.off();
      } else if (node21.getResponseBuffer(0x00) == 0x0b) {
        led401.on(); led301.off(); led201.on(); led101.on();
      } else if (node21.getResponseBuffer(0x00) == 0x0c) {
        led401.on(); led301.on(); led201.off(); led101.off();
      } else if (node21.getResponseBuffer(0x00) == 0x0d) {
        led401.on(); led301.on(); led201.off(); led101.on();
      } else if (node21.getResponseBuffer(0x00) == 0x0e) {
        led401.on(); led301.on(); led201.on(); led101.off();
      } else if (node21.getResponseBuffer(0x00) == 0x0f) {
        led401.on(); led301.on(); led201.on(); led101.on();
      } else if (node21.getResponseBuffer(0x00) == 0) {
        led401.off(); led301.off(); led201.off(); led101.off();
      }
    }
  }
  //**************************************[Device 2]**************************************
  if (relay4_sw2 == 1) {
    result2 = node22.readDiscreteInputs(0x0000, 4);
    if (result2 == node22.ku8MBSuccess) {
      if (node22.getResponseBuffer(0x00) == 1) {
        led402.off(); led302.off(); led202.off(); led102.on();
      } else if (node22.getResponseBuffer(0x00) == 2) {
        led402.off(); led302.off(); led202.on(); led102.off();
      } else if (node22.getResponseBuffer(0x00) == 3) {
        led402.off(); led302.off(); led202.on(); led102.on();
      } else if (node22.getResponseBuffer(0x00) == 4) {
        led402.off(); led302.on(); led202.off(); led102.off();
      } else if (node22.getResponseBuffer(0x00) == 5) {
        led402.off(); led302.on(); led202.off(); led102.on();
      } else if (node22.getResponseBuffer(0x00) == 6) {
        led402.off(); led302.on(); led202.on(); led102.off();
      } else if (node22.getResponseBuffer(0x00) == 7) {
        led402.off(); led302.on(); led202.on(); led102.on();
      } else if (node22.getResponseBuffer(0x00) == 8) {
        led402.on(); led302.off(); led202.off(); led102.off();
      } else if (node22.getResponseBuffer(0x00) == 9) {
        led402.on(); led302.off(); led202.off(); led102.on();
      } else if (node22.getResponseBuffer(0x00) == 0x0a) {
        led402.on(); led302.off(); led202.on(); led102.off();
      } else if (node22.getResponseBuffer(0x00) == 0x0b) {
        led402.on(); led302.off(); led202.on(); led102.on();
      } else if (node22.getResponseBuffer(0x00) == 0x0c) {
        led402.on(); led302.on(); led202.off(); led102.off();
      } else if (node22.getResponseBuffer(0x00) == 0x0d) {
        led402.on(); led302.on(); led202.off(); led102.on();
      } else if (node22.getResponseBuffer(0x00) == 0x0e) {
        led402.on(); led302.on(); led202.on(); led102.off();
      } else if (node22.getResponseBuffer(0x00) == 0x0f) {
        led402.on(); led302.on(); led202.on(); led102.on();
      } else if (node22.getResponseBuffer(0x00) == 0) {
        led402.off(); led302.off(); led202.off(); led102.off();
      }
    }
  }
  //**************************************[Device 3]**************************************
  if (relay4_sw3 == 1) {
    result3 = node23.readDiscreteInputs(0x0000, 4);
    if (result3 == node23.ku8MBSuccess) {
      if (node23.getResponseBuffer(0x00) == 1) {
        led403.off(); led303.off(); led203.off(); led103.on();
      } else if (node23.getResponseBuffer(0x00) == 2) {
        led403.off(); led303.off(); led203.on(); led103.off();
      } else if (node23.getResponseBuffer(0x00) == 3) {
        led403.off(); led303.off(); led203.on(); led103.on();
      } else if (node23.getResponseBuffer(0x00) == 4) {
        led403.off(); led303.on(); led203.off(); led103.off();
      } else if (node23.getResponseBuffer(0x00) == 5) {
        led403.off(); led303.on(); led203.off(); led103.on();
      } else if (node23.getResponseBuffer(0x00) == 6) {
        led403.off(); led303.on(); led203.on(); led103.off();
      } else if (node23.getResponseBuffer(0x00) == 7) {
        led403.off(); led303.on(); led203.on(); led103.on();
      } else if (node23.getResponseBuffer(0x00) == 8) {
        led403.on(); led303.off(); led203.off(); led103.off();
      } else if (node23.getResponseBuffer(0x00) == 9) {
        led403.on(); led303.off(); led203.off(); led103.on();
      } else if (node23.getResponseBuffer(0x00) == 0x0a) {
        led403.on(); led303.off(); led203.on(); led103.off();
      } else if (node23.getResponseBuffer(0x00) == 0x0b) {
        led403.on(); led303.off(); led203.on(); led103.on();
      } else if (node23.getResponseBuffer(0x00) == 0x0c) {
        led403.on(); led303.on(); led203.off(); led103.off();
      } else if (node23.getResponseBuffer(0x00) == 0x0d) {
        led403.on(); led303.on(); led203.off(); led103.on();
      } else if (node23.getResponseBuffer(0x00) == 0x0e) {
        led403.on(); led303.on(); led203.on(); led103.off();
      } else if (node23.getResponseBuffer(0x00) == 0x0f) {
        led403.on(); led303.on(); led203.on(); led103.on();
      } else if (node23.getResponseBuffer(0x00) == 0) {
        led403.off(); led303.off(); led203.off(); led103.off();
      }
    }
  }
  //**************************************[Device 4]**************************************
  if (relay4_sw4 == 1) {
    result4 = node24.readDiscreteInputs(0x0000, 4);
    if (result4 == node24.ku8MBSuccess) {
      if (node24.getResponseBuffer(0x00) == 1) {
        led404.off(); led304.off(); led204.off(); led104.on();
      } else if (node24.getResponseBuffer(0x00) == 2) {
        led404.off(); led304.off(); led204.on(); led104.off();
      } else if (node24.getResponseBuffer(0x00) == 3) {
        led404.off(); led304.off(); led204.on(); led104.on();
      } else if (node24.getResponseBuffer(0x00) == 4) {
        led404.off(); led304.on(); led204.off(); led104.off();
      } else if (node24.getResponseBuffer(0x00) == 5) {
        led404.off(); led304.on(); led204.off(); led104.on();
      } else if (node24.getResponseBuffer(0x00) == 6) {
        led404.off(); led304.on(); led204.on(); led104.off();
      } else if (node24.getResponseBuffer(0x00) == 7) {
        led404.off(); led304.on(); led204.on(); led104.on();
      } else if (node24.getResponseBuffer(0x00) == 8) {
        led404.on(); led304.off(); led204.off(); led104.off();
      } else if (node24.getResponseBuffer(0x00) == 9) {
        led404.on(); led304.off(); led204.off(); led104.on();
      } else if (node24.getResponseBuffer(0x00) == 0x0a) {
        led404.on(); led304.off(); led204.on(); led104.off();
      } else if (node24.getResponseBuffer(0x00) == 0x0b) {
        led404.on(); led304.off(); led204.on(); led104.on();
      } else if (node24.getResponseBuffer(0x00) == 0x0c) {
        led404.on(); led304.on(); led204.off(); led104.off();
      } else if (node24.getResponseBuffer(0x00) == 0x0d) {
        led404.on(); led304.on(); led204.off(); led104.on();
      } else if (node24.getResponseBuffer(0x00) == 0x0e) {
        led404.on(); led304.on(); led204.on(); led104.off();
      } else if (node24.getResponseBuffer(0x00) == 0x0f) {
        led404.on(); led304.on(); led204.on(); led104.on();
      } else if (node24.getResponseBuffer(0x00) == 0) {
        led404.off(); led304.off(); led204.off(); led104.off();
      }
    }
  }
  //**************************************[Device 5]**************************************
  if (relay4_sw5 == 1) {
    result5 = node25.readDiscreteInputs(0x0000, 4);
    if (result5 == node25.ku8MBSuccess) {
      if (node25.getResponseBuffer(0x00) == 1) {
        led405.off(); led305.off(); led205.off(); led105.on();
      } else if (node25.getResponseBuffer(0x00) == 2) {
        led405.off(); led305.off(); led205.on(); led105.off();
      } else if (node25.getResponseBuffer(0x00) == 3) {
        led405.off(); led305.off(); led205.on(); led105.on();
      } else if (node25.getResponseBuffer(0x00) == 4) {
        led405.off(); led305.on(); led205.off(); led105.off();
      } else if (node25.getResponseBuffer(0x00) == 5) {
        led405.off(); led305.on(); led205.off(); led105.on();
      } else if (node25.getResponseBuffer(0x00) == 6) {
        led405.off(); led305.on(); led205.on(); led105.off();
      } else if (node25.getResponseBuffer(0x00) == 7) {
        led405.off(); led305.on(); led205.on(); led105.on();
      } else if (node25.getResponseBuffer(0x00) == 8) {
        led405.on(); led305.off(); led205.off(); led105.off();
      } else if (node25.getResponseBuffer(0x00) == 9) {
        led405.on(); led305.off(); led205.off(); led105.on();
      } else if (node25.getResponseBuffer(0x00) == 0x0a) {
        led405.on(); led305.off(); led205.on(); led105.off();
      } else if (node25.getResponseBuffer(0x00) == 0x0b) {
        led405.on(); led305.off(); led205.on(); led105.on();
      } else if (node25.getResponseBuffer(0x00) == 0x0c) {
        led405.on(); led305.on(); led205.off(); led105.off();
      } else if (node25.getResponseBuffer(0x00) == 0x0d) {
        led405.on(); led305.on(); led205.off(); led105.on();
      } else if (node25.getResponseBuffer(0x00) == 0x0e) {
        led405.on(); led305.on(); led205.on(); led105.off();
      } else if (node25.getResponseBuffer(0x00) == 0x0f) {
        led405.on(); led305.on(); led205.on(); led105.on();
      } else if (node25.getResponseBuffer(0x00) == 0) {
        led405.off(); led305.off(); led205.off(); led105.off();
      }
    }
  }
  //**************************************[Device 6]**************************************
  if (relay4_sw6 == 1) {
    result6 = node26.readDiscreteInputs(0x0000, 4);
    if (result6 == node26.ku8MBSuccess) {
      if (node26.getResponseBuffer(0x00) == 1) {
        led406.off(); led306.off(); led206.off(); led106.on();
      } else if (node26.getResponseBuffer(0x00) == 2) {
        led406.off(); led306.off(); led206.on(); led106.off();
      } else if (node26.getResponseBuffer(0x00) == 3) {
        led406.off(); led306.off(); led206.on(); led106.on();
      } else if (node26.getResponseBuffer(0x00) == 4) {
        led406.off(); led306.on(); led206.off(); led106.off();
      } else if (node26.getResponseBuffer(0x00) == 5) {
        led406.off(); led306.on(); led206.off(); led106.on();
      } else if (node26.getResponseBuffer(0x00) == 6) {
        led406.off(); led306.on(); led206.on(); led106.off();
      } else if (node26.getResponseBuffer(0x00) == 7) {
        led406.off(); led306.on(); led206.on(); led106.on();
      } else if (node26.getResponseBuffer(0x00) == 8) {
        led406.on(); led306.off(); led206.off(); led106.off();
      } else if (node26.getResponseBuffer(0x00) == 9) {
        led406.on(); led306.off(); led206.off(); led106.on();
      } else if (node26.getResponseBuffer(0x00) == 0x0a) {
        led406.on(); led306.off(); led206.on(); led106.off();
      } else if (node26.getResponseBuffer(0x00) == 0x0b) {
        led406.on(); led306.off(); led206.on(); led106.on();
      } else if (node26.getResponseBuffer(0x00) == 0x0c) {
        led406.on(); led306.on(); led206.off(); led106.off();
      } else if (node26.getResponseBuffer(0x00) == 0x0d) {
        led406.on(); led306.on(); led206.off(); led106.on();
      } else if (node26.getResponseBuffer(0x00) == 0x0e) {
        led406.on(); led306.on(); led206.on(); led106.off();
      } else if (node26.getResponseBuffer(0x00) == 0x0f) {
        led406.on(); led306.on(); led206.on(); led106.on();
      } else if (node26.getResponseBuffer(0x00) == 0) {
        led406.off(); led306.off(); led206.off(); led106.off();
      }
    }
  }
}

//==========================================================[Sensor H/T]==========================================================
void ReadSensor() {
  delay(200);
  uint8_t result1, result2, result3, result4, result5, result6;
  if (sensorR_1 == 1) {
    result1 = node11.readHoldingRegisters(0x0000, 2); // Start 0x0000Addr, 2Byte
    temp_1 = node11.getResponseBuffer(0x00) / 10.0f;
    humi_1 = node11.getResponseBuffer(0x01) / 10.0f;
    Blynk.virtualWrite(V15, temp_1);
    Blynk.virtualWrite(V16, humi_1);
  }
  if (sensorR_2 == 1) {
    delay(200);
    result2 = node12.readHoldingRegisters(0x0000, 2); // Start 0x0000Addr, 2Byte
    temp_2 = node12.getResponseBuffer(0x00) / 10.0f;
    humi_2 = node12.getResponseBuffer(0x01) / 10.0f;
    Blynk.virtualWrite(V35, temp_2);
    Blynk.virtualWrite(V36, humi_2);
  }
  if (sensorR_3 == 1) {
    delay(200);
    result3 = node13.readHoldingRegisters(0x0000, 2); // Start 0x0000Addr, 2Byte
    temp_3 = node13.getResponseBuffer(0x00) / 10.0f;
    humi_3 = node13.getResponseBuffer(0x01) / 10.0f;
    Blynk.virtualWrite(V55, temp_3);
    Blynk.virtualWrite(V56, humi_3);
  }
  if (sensorR_4 == 1) {
    delay(200);
    result4 = node14.readHoldingRegisters(0x0000, 2); // Start 0x0000Addr, 2Byte
    temp_4 = node14.getResponseBuffer(0x00) / 10.0f;
    humi_4 = node14.getResponseBuffer(0x01) / 10.0f;
    Blynk.virtualWrite(V75, temp_4);
    Blynk.virtualWrite(V76, humi_4);
  }
  if (sensorR_5 == 1) {
    delay(200);
    result5 = node15.readHoldingRegisters(0x0000, 2); // Start 0x0000Addr, 2Byte
    temp_5 = node15.getResponseBuffer(0x00) / 10.0f;
    humi_5 = node15.getResponseBuffer(0x01) / 10.0f;
    Blynk.virtualWrite(V95, temp_5);
    Blynk.virtualWrite(V96, humi_5);
  }
  if (sensorR_6 == 1) {
    delay(200);
    result6 = node16.readHoldingRegisters(0x0000, 2); // Start 0x0000Addr, 2Byte
    temp_6 = node16.getResponseBuffer(0x00) / 10.0f;
    humi_6 = node16.getResponseBuffer(0x01) / 10.0f;
    Blynk.virtualWrite(V115, temp_6);
    Blynk.virtualWrite(V116, humi_6);
  }
}
//===========================================================================================================================
