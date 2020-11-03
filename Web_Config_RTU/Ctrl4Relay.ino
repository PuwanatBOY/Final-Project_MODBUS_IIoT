//============================[Device 1]============================
BLYNK_WRITE(V1) {
    if (param.asInt() == 0) {
      node21.writeSingleCoil(0, 0);
      count4r_1 -= 1;
    }
    if (param.asInt() == 1) {
      node21.writeSingleCoil(0, 1);
      count4r_1 += 1;
    }
    Check4Relay1();
  }

BLYNK_WRITE(V2) {
  if (param.asInt() == 0) {
    node21.writeSingleCoil(1, 0);
    count4r_1 -= 1;
  }
  if (param.asInt() == 1) {
    node21.writeSingleCoil(1, 1);
    count4r_1 += 1;
  }
  Check4Relay1();
}

BLYNK_WRITE(V3) {
  if (param.asInt() == 0) {
    node21.writeSingleCoil(2, 0);
    count4r_1 -= 1;
  }
  if (param.asInt() == 1) {
    node21.writeSingleCoil(2, 1);
    count4r_1 += 1;
  }
  Check4Relay1();
}

BLYNK_WRITE(V4) {
  if (param.asInt() == 0) {
    node21.writeSingleCoil(3, 0);
    count4r_1 -= 1;
  }
  if (param.asInt() == 1) {
    node21.writeSingleCoil(3, 1);
    count4r_1 += 1;
  }
  Check4Relay1();
}

BLYNK_WRITE(V5) {
  if (param.asInt() == 0) {
    node21.writeSingleCoil(0x00FF, 0);
    Blynk.virtualWrite(V1, LOW);
    Blynk.virtualWrite(V2, LOW);
    Blynk.virtualWrite(V3, LOW);
    Blynk.virtualWrite(V4, LOW);
    count4r_1 = 0;
  }
  if (param.asInt() == 1) {
    node21.writeSingleCoil(0x00FF, 1);
    Blynk.virtualWrite(V1, HIGH);
    Blynk.virtualWrite(V2, HIGH);
    Blynk.virtualWrite(V3, HIGH);
    Blynk.virtualWrite(V4, HIGH);
    count4r_1 = 4;
  }
}

void Check4Relay1() {
  if (count4r_1 == 4) {
    Blynk.virtualWrite(V5, HIGH);
  } else {
    Blynk.virtualWrite(V5, LOW);
  }
}

//============================[Device 2]============================
BLYNK_WRITE(V21) {
  if (param.asInt() == 0) {
    node22.writeSingleCoil(0, 0);
    count4r_2 -= 1;
  }
  if (param.asInt() == 1) {
    node22.writeSingleCoil(0, 1);
    count4r_2 += 1;
  }
  Check4Relay2();
}

BLYNK_WRITE(V22) {
  if (param.asInt() == 0) {
    node22.writeSingleCoil(1, 0);
    count4r_2 -= 1;
  }
  if (param.asInt() == 1) {
    node22.writeSingleCoil(1, 1);
    count4r_2 += 1;
  }
  Check4Relay2();
}

BLYNK_WRITE(V23) {
  if (param.asInt() == 0) {
    node22.writeSingleCoil(2, 0);
    count4r_2 -= 1;
  }
  if (param.asInt() == 1) {
    node22.writeSingleCoil(2, 1);
    count4r_2 += 1;
  }
  Check4Relay2();
}

BLYNK_WRITE(V24) {
  if (param.asInt() == 0) {
    node22.writeSingleCoil(3, 0);
    count4r_2 -= 1;
  }
  if (param.asInt() == 1) {
    node22.writeSingleCoil(3, 1);
    count4r_2 += 1;
  }
  Check4Relay2();
}

BLYNK_WRITE(V25) {
  if (param.asInt() == 0) {
    node22.writeSingleCoil(0x00FF, 0);
    Blynk.virtualWrite(V21, LOW);
    Blynk.virtualWrite(V22, LOW);
    Blynk.virtualWrite(V23, LOW);
    Blynk.virtualWrite(V24, LOW);
    count4r_2 = 0;
  }
  if (param.asInt() == 1) {
    node22.writeSingleCoil(0x00FF, 1);
    Blynk.virtualWrite(V21, HIGH);
    Blynk.virtualWrite(V22, HIGH);
    Blynk.virtualWrite(V23, HIGH);
    Blynk.virtualWrite(V24, HIGH);
    count4r_2 = 4;
  }
}

void Check4Relay2() {
  if (count4r_2 == 4) {
    Blynk.virtualWrite(V25, HIGH);
  } else {
    Blynk.virtualWrite(V25, LOW);
  }
}

//============================[Device 3]============================
BLYNK_WRITE(V41) {
  if (param.asInt() == 0) {
    node23.writeSingleCoil(0, 0);
    count4r_3 -= 1;
  }
  if (param.asInt() == 1) {
    node23.writeSingleCoil(0, 1);
    count4r_3 += 1;
  }
  Check4Relay3();
}

BLYNK_WRITE(V42) {
  if (param.asInt() == 0) {
    node23.writeSingleCoil(1, 0);
    count4r_3 -= 1;
  }
  if (param.asInt() == 1) {
    node23.writeSingleCoil(1, 1);
    count4r_3 += 1;
  }
  Check4Relay3();
}

BLYNK_WRITE(V43) {
  if (param.asInt() == 0) {
    node23.writeSingleCoil(2, 0);
    count4r_3 -= 1;
  }
  if (param.asInt() == 1) {
    node23.writeSingleCoil(2, 1);
    count4r_3 += 1;
  }
  Check4Relay3();
}

BLYNK_WRITE(V44) {
  if (param.asInt() == 0) {
    node23.writeSingleCoil(3, 0);
    count4r_3 -= 1;
  }
  if (param.asInt() == 1) {
    node23.writeSingleCoil(3, 1);
    count4r_3 += 1;
  }
  Check4Relay3();
}

BLYNK_WRITE(V45) {
  if (param.asInt() == 0) {
    node23.writeSingleCoil(0x00FF, 0);
    Blynk.virtualWrite(V41, LOW);
    Blynk.virtualWrite(V42, LOW);
    Blynk.virtualWrite(V43, LOW);
    Blynk.virtualWrite(V44, LOW);
    count4r_3 = 0;
  }
  if (param.asInt() == 1) {
    node23.writeSingleCoil(0x00FF, 1);
    Blynk.virtualWrite(V41, HIGH);
    Blynk.virtualWrite(V42, HIGH);
    Blynk.virtualWrite(V43, HIGH);
    Blynk.virtualWrite(V44, HIGH);
    count4r_3 = 4;
  }
}

void Check4Relay3() {
  if (count4r_3 == 4) {
    Blynk.virtualWrite(V45, HIGH);
  } else {
    Blynk.virtualWrite(V45, LOW);
  }
}

//============================[Device 4]============================
BLYNK_WRITE(V61) {
  if (param.asInt() == 0) {
    node24.writeSingleCoil(0, 0);
    count4r_4 -= 1;
  }
  if (param.asInt() == 1) {
    node24.writeSingleCoil(0, 1);
    count4r_4 += 1;
  }
  Check4Relay4();
}

BLYNK_WRITE(V62) {
  if (param.asInt() == 0) {
    node24.writeSingleCoil(1, 0);
    count4r_4 -= 1;
  }
  if (param.asInt() == 1) {
    node24.writeSingleCoil(1, 1);
    count4r_4 += 1;
  }
  Check4Relay4();
}

BLYNK_WRITE(V63) {
  if (param.asInt() == 0) {
    node24.writeSingleCoil(2, 0);
    count4r_4 -= 1;
  }
  if (param.asInt() == 1) {
    node24.writeSingleCoil(2, 1);
    count4r_4 += 1;
  }
  Check4Relay4();
}

BLYNK_WRITE(V64) {
  if (param.asInt() == 0) {
    node24.writeSingleCoil(3, 0);
    count4r_4 -= 1;
  }
  if (param.asInt() == 1) {
    node24.writeSingleCoil(3, 1);
    count4r_4 += 1;
  }
  Check4Relay4();
}

BLYNK_WRITE(V65) {
  if (param.asInt() == 0) {
    node24.writeSingleCoil(0x00FF, 0);
    Blynk.virtualWrite(V61, LOW);
    Blynk.virtualWrite(V62, LOW);
    Blynk.virtualWrite(V63, LOW);
    Blynk.virtualWrite(V64, LOW);
    count4r_4 = 0;
  }
  if (param.asInt() == 1) {
    node24.writeSingleCoil(0x00FF, 1);
    Blynk.virtualWrite(V61, HIGH);
    Blynk.virtualWrite(V62, HIGH);
    Blynk.virtualWrite(V63, HIGH);
    Blynk.virtualWrite(V64, HIGH);
    count4r_4 = 4;
  }
}

void Check4Relay4() {
  if (count4r_4 == 4) {
    Blynk.virtualWrite(V65, HIGH);
  } else {
    Blynk.virtualWrite(V65, LOW);
  }
}

//============================[Device 5]============================
BLYNK_WRITE(V81) {
  if (param.asInt() == 0) {
    node25.writeSingleCoil(0, 0);
    count4r_5 -= 1;
  }
  if (param.asInt() == 1) {
    node25.writeSingleCoil(0, 1);
    count4r_5 += 1;
  }
  Check4Relay5();
}

BLYNK_WRITE(V82) {
  if (param.asInt() == 0) {
    node25.writeSingleCoil(1, 0);
    count4r_5 -= 1;
  }
  if (param.asInt() == 1) {
    node25.writeSingleCoil(1, 1);
    count4r_5 += 1;
  }
  Check4Relay5();
}

BLYNK_WRITE(V83) {
  if (param.asInt() == 0) {
    node25.writeSingleCoil(2, 0);
    count4r_5 -= 1;
  }
  if (param.asInt() == 1) {
    node25.writeSingleCoil(2, 1);
    count4r_5 += 1;
  }
  Check4Relay5();
}

BLYNK_WRITE(V84) {
  if (param.asInt() == 0) {
    node25.writeSingleCoil(3, 0);
    count4r_5 -= 1;
  }
  if (param.asInt() == 1) {
    node25.writeSingleCoil(3, 1);
    count4r_5 += 1;
  }
  Check4Relay5();
}

BLYNK_WRITE(V85) {
  if (param.asInt() == 0) {
    node25.writeSingleCoil(0x00FF, 0);
    Blynk.virtualWrite(V81, LOW);
    Blynk.virtualWrite(V82, LOW);
    Blynk.virtualWrite(V83, LOW);
    Blynk.virtualWrite(V84, LOW);
    count4r_5 = 0;
  }
  if (param.asInt() == 1) {
    node25.writeSingleCoil(0x00FF, 1);
    Blynk.virtualWrite(V81, HIGH);
    Blynk.virtualWrite(V82, HIGH);
    Blynk.virtualWrite(V83, HIGH);
    Blynk.virtualWrite(V84, HIGH);
    count4r_5 = 4;
  }
}

void Check4Relay5() {
  if (count4r_5 == 4) {
    Blynk.virtualWrite(V85, HIGH);
  } else {
    Blynk.virtualWrite(V85, LOW);
  }
}

//============================[Device 6]============================
BLYNK_WRITE(V101) {
  if (param.asInt() == 0) {
    node26.writeSingleCoil(0, 0);
    count4r_6 -= 1;
  }
  if (param.asInt() == 1) {
    node26.writeSingleCoil(0, 1);
    count4r_6 += 1;
  }
  Check4Relay6();
}

BLYNK_WRITE(V102) {
  if (param.asInt() == 0) {
    node26.writeSingleCoil(1, 0);
    count4r_6 -= 1;
  }
  if (param.asInt() == 1) {
    node26.writeSingleCoil(1, 1);
    count4r_6 += 1;
  }
  Check4Relay6();
}

BLYNK_WRITE(V103) {
  if (param.asInt() == 0) {
    node26.writeSingleCoil(2, 0);
    count4r_6 -= 1;
  }
  if (param.asInt() == 1) {
    node26.writeSingleCoil(2, 1);
    count4r_6 += 1;
  }
  Check4Relay6();
}

BLYNK_WRITE(V104) {
  if (param.asInt() == 0) {
    node26.writeSingleCoil(3, 0);
    count4r_6 -= 1;
  }
  if (param.asInt() == 1) {
    node26.writeSingleCoil(3, 1);
    count4r_6 += 1;
  }
  Check4Relay6();
}

BLYNK_WRITE(V105) {
  if (param.asInt() == 0) {
    node26.writeSingleCoil(0x00FF, 0);
    Blynk.virtualWrite(V101, LOW);
    Blynk.virtualWrite(V102, LOW);
    Blynk.virtualWrite(V103, LOW);
    Blynk.virtualWrite(V104, LOW);
    count4r_6 = 0;
  }
  if (param.asInt() == 1) {
    node26.writeSingleCoil(0x00FF, 1);
    Blynk.virtualWrite(V101, HIGH);
    Blynk.virtualWrite(V102, HIGH);
    Blynk.virtualWrite(V103, HIGH);
    Blynk.virtualWrite(V104, HIGH);
    count4r_6 = 4;
  }
}

void Check4Relay6() {
  if (count4r_6 == 4) {
    Blynk.virtualWrite(V105, HIGH);
  } else {
    Blynk.virtualWrite(V105, LOW);
  }
}
