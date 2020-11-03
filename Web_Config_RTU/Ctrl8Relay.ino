//============================[Device 1]============================
BLYNK_WRITE(V6){
  if (param.asInt() == 0){
    node31.writeSingleRegister(1, 0x0200);
    count8r_1 -= 1;
  }
  if (param.asInt() == 1){
    node31.writeSingleRegister(1, 0x0100);
    count8r_1 += 1;
  }
  Check8Relay1();
}

BLYNK_WRITE(V7){
  if (param.asInt() == 0){
    node31.writeSingleRegister(2, 0x0200);
    count8r_1 -= 1;
  }
  if (param.asInt() == 1){
    node31.writeSingleRegister(2, 0x0100);
    count8r_1 += 1;
  }
  Check8Relay1();
}

BLYNK_WRITE(V8){
  if (param.asInt() == 0){
    node31.writeSingleRegister(3, 0x0200);
    count8r_1 -= 1;
  }
  if (param.asInt() == 1){
    node31.writeSingleRegister(3, 0x0100);
    count8r_1 += 1;
  }
  Check8Relay1();
}

BLYNK_WRITE(V9){
  if (param.asInt() == 0){
    node31.writeSingleRegister(4, 0x0200);
    count8r_1 -= 1;
  }
  if (param.asInt() == 1){
    node31.writeSingleRegister(4, 0x0100);
    count8r_1 += 1;
  }
  Check8Relay1();
}

BLYNK_WRITE(V10){
  if (param.asInt() == 0){
    node31.writeSingleRegister(5, 0x0200);
    count8r_1 -= 1;
  }
  if (param.asInt() == 1){
    node31.writeSingleRegister(5, 0x0100);
    count8r_1 += 1;
  }
  Check8Relay1();
}

BLYNK_WRITE(V11){
  if (param.asInt() == 0){
    node31.writeSingleRegister(6, 0x0200);
    count8r_1 -= 1;
  }
  if (param.asInt() == 1){
    node31.writeSingleRegister(6, 0x0100);
    count8r_1 += 1;
  }
  Check8Relay1();
}

BLYNK_WRITE(V12){
  if (param.asInt() == 0){
    node31.writeSingleRegister(7, 0x0200);
    count8r_1 -= 1;
  }
  if (param.asInt() == 1){
    node31.writeSingleRegister(7, 0x0100);
    count8r_1 += 1;
  }
  Check8Relay1();
}

BLYNK_WRITE(V13){
  if (param.asInt() == 0){
    node31.writeSingleRegister(8, 0x0200);
    count8r_1 -= 1;
  }
  if (param.asInt() == 1)
  {
    node31.writeSingleRegister(8, 0x0100);
    count8r_1 += 1;
  }
  Check8Relay1();
}

BLYNK_WRITE(V14){
  if (param.asInt() == 0){
    for (int j = 1; j <= 8; j++) {
      node31.writeSingleRegister(j, 0x0200);
      if (j == 1) {
        Blynk.virtualWrite(V6, LOW);
      } else if (j == 2) {
        Blynk.virtualWrite(V7, LOW);
      } else if (j == 3) {
        Blynk.virtualWrite(V8, LOW);
      } else if (j == 4) {
        Blynk.virtualWrite(V9, LOW);
      } else if (j == 5) {
        Blynk.virtualWrite(V10, LOW);
      } else if (j == 6) {
        Blynk.virtualWrite(V11, LOW);
      } else if (j == 7) {
        Blynk.virtualWrite(V12, LOW);
      } else if (j == 8) {
        Blynk.virtualWrite(V13, LOW);
      }
      delay(100);
    }
    count8r_1 = 0;
  }
  if (param.asInt() == 1){
    for (int j = 1; j <= 8; j++) {
      node31.writeSingleRegister(j, 0x0100);
      if (j == 1) {
        Blynk.virtualWrite(V6, HIGH);
      } else if (j == 2) {
        Blynk.virtualWrite(V7, HIGH);
      } else if (j == 3) {
        Blynk.virtualWrite(V8, HIGH);
      } else if (j == 4) {
        Blynk.virtualWrite(V9, HIGH);
      } else if (j == 5) {
        Blynk.virtualWrite(V10, HIGH);
      } else if (j == 6) {
        Blynk.virtualWrite(V11, HIGH);
      } else if (j == 7) {
        Blynk.virtualWrite(V12, HIGH);
      } else if (j == 8) {
        Blynk.virtualWrite(V13, HIGH);
      }
      delay(100);
    }
    count8r_1 = 8;
  }
}

void Check8Relay1() {
  if (count8r_1 == 8) {
    Blynk.virtualWrite(V14, HIGH);
  } else {
    Blynk.virtualWrite(V14, LOW);
  }
}

//============================[Device 2]============================
BLYNK_WRITE(V26){
  if (param.asInt() == 0){
    node32.writeSingleRegister(1, 0x0200);
    count8r_2 -= 1;
  }
  if (param.asInt() == 1){
    node32.writeSingleRegister(1, 0x0100);
    count8r_2 += 1;
  }
  Check8Relay2();
}

BLYNK_WRITE(V27){
  if (param.asInt() == 0){
    node32.writeSingleRegister(2, 0x0200);
    count8r_2 -= 1;
  }
  if (param.asInt() == 1){
    node32.writeSingleRegister(2, 0x0100);
    count8r_2 += 1;
  }
  Check8Relay2();
}

BLYNK_WRITE(V28){
  if (param.asInt() == 0){
    node32.writeSingleRegister(3, 0x0200);
    count8r_2 -= 1;
  }
  if (param.asInt() == 1){
    node32.writeSingleRegister(3, 0x0100);
    count8r_2 += 1;
  }
  Check8Relay2();
}

BLYNK_WRITE(V29){
  if (param.asInt() == 0){
    node32.writeSingleRegister(4, 0x0200);
    count8r_2 -= 1;
  }
  if (param.asInt() == 1){
    node32.writeSingleRegister(4, 0x0100);
    count8r_2 += 1;
  }
  Check8Relay2();
}

BLYNK_WRITE(V30){
  if (param.asInt() == 0){
    node32.writeSingleRegister(5, 0x0200);
    count8r_2 -= 1;
  }
  if (param.asInt() == 1){
    node32.writeSingleRegister(5, 0x0100);
    count8r_2 += 1;
  }
  Check8Relay2();
}

BLYNK_WRITE(V31){
  if (param.asInt() == 0){
    node32.writeSingleRegister(6, 0x0200);
    count8r_2 -= 1;
  }
  if (param.asInt() == 1){
    node32.writeSingleRegister(6, 0x0100);
    count8r_2 += 1;
  }
  Check8Relay2();
}

BLYNK_WRITE(V32){
  if (param.asInt() == 0){
    node32.writeSingleRegister(7, 0x0200);
    count8r_2 -= 1;
  }
  if (param.asInt() == 1){
    node32.writeSingleRegister(7, 0x0100);
    count8r_2 += 1;
  }
  Check8Relay2();
}

BLYNK_WRITE(V33){
  if (param.asInt() == 0){
    node32.writeSingleRegister(8, 0x0200);
    count8r_2 -= 1;
  }
  if (param.asInt() == 1)
  {
    node32.writeSingleRegister(8, 0x0100);
    count8r_2 += 1;
  }
  Check8Relay2();
}

BLYNK_WRITE(V34){
  if (param.asInt() == 0){
    for (int j = 1; j <= 8; j++) {
      node32.writeSingleRegister(j, 0x0200);
      if (j == 1) {
        Blynk.virtualWrite(V26, LOW);
      } else if (j == 2) {
        Blynk.virtualWrite(V27, LOW);
      } else if (j == 3) {
        Blynk.virtualWrite(V28, LOW);
      } else if (j == 4) {
        Blynk.virtualWrite(V29, LOW);
      } else if (j == 5) {
        Blynk.virtualWrite(V30, LOW);
      } else if (j == 6) {
        Blynk.virtualWrite(V31, LOW);
      } else if (j == 7) {
        Blynk.virtualWrite(V32, LOW);
      } else if (j == 8) {
        Blynk.virtualWrite(V33, LOW);
      }
      delay(100);
    }
    count8r_2 = 0;
  }
  if (param.asInt() == 1){
    for (int j = 1; j <= 8; j++) {
      node32.writeSingleRegister(j, 0x0100);
      if (j == 1) {
        Blynk.virtualWrite(V26, HIGH);
      } else if (j == 2) {
        Blynk.virtualWrite(V27, HIGH);
      } else if (j == 3) {
        Blynk.virtualWrite(V28, HIGH);
      } else if (j == 4) {
        Blynk.virtualWrite(V29, HIGH);
      } else if (j == 5) {
        Blynk.virtualWrite(V30, HIGH);
      } else if (j == 6) {
        Blynk.virtualWrite(V31, HIGH);
      } else if (j == 7) {
        Blynk.virtualWrite(V32, HIGH);
      } else if (j == 8) {
        Blynk.virtualWrite(V33, HIGH);
      }
      delay(100);
    }
    count8r_2 = 8;
  }
}

void Check8Relay2() {
  if (count8r_2 == 8) {
    Blynk.virtualWrite(V34, HIGH);
  } else {
    Blynk.virtualWrite(V34, LOW);
  }
}

//============================[Device 3]============================
BLYNK_WRITE(V46){
  if (param.asInt() == 0){
    node33.writeSingleRegister(1, 0x0200);
    count8r_3 -= 1;
  }
  if (param.asInt() == 1){
    node33.writeSingleRegister(1, 0x0100);
    count8r_3 += 1;
  }
  Check8Relay3();
}

BLYNK_WRITE(V47){
  if (param.asInt() == 0){
    node33.writeSingleRegister(2, 0x0200);
    count8r_3 -= 1;
  }
  if (param.asInt() == 1){
    node33.writeSingleRegister(2, 0x0100);
    count8r_3 += 1;
  }
  Check8Relay3();
}

BLYNK_WRITE(V48){
  if (param.asInt() == 0){
    node33.writeSingleRegister(3, 0x0200);
    count8r_3 -= 1;
  }
  if (param.asInt() == 1){
    node33.writeSingleRegister(3, 0x0100);
    count8r_3 += 1;
  }
  Check8Relay3();
}

BLYNK_WRITE(V49){
  if (param.asInt() == 0){
    node33.writeSingleRegister(4, 0x0200);
    count8r_3 -= 1;
  }
  if (param.asInt() == 1){
    node33.writeSingleRegister(4, 0x0100);
    count8r_3 += 1;
  }
  Check8Relay3();
}

BLYNK_WRITE(V50){
  if (param.asInt() == 0){
    node33.writeSingleRegister(5, 0x0200);
    count8r_3 -= 1;
  }
  if (param.asInt() == 1){
    node33.writeSingleRegister(5, 0x0100);
    count8r_3 += 1;
  }
  Check8Relay3();
}

BLYNK_WRITE(V51){
  if (param.asInt() == 0){
    node33.writeSingleRegister(6, 0x0200);
    count8r_3 -= 1;
  }
  if (param.asInt() == 1){
    node33.writeSingleRegister(6, 0x0100);
    count8r_3 += 1;
  }
  Check8Relay3();
}

BLYNK_WRITE(V52){
  if (param.asInt() == 0){
    node33.writeSingleRegister(7, 0x0200);
    count8r_3 -= 1;
  }
  if (param.asInt() == 1){
    node33.writeSingleRegister(7, 0x0100);
    count8r_3 += 1;
  }
  Check8Relay3();
}

BLYNK_WRITE(V53){
  if (param.asInt() == 0){
    node33.writeSingleRegister(8, 0x0200);
    count8r_3 -= 1;
  }
  if (param.asInt() == 1)
  {
    node33.writeSingleRegister(8, 0x0100);
    count8r_3 += 1;
  }
  Check8Relay3();
}

BLYNK_WRITE(V54){
  if (param.asInt() == 0){
    for (int j = 1; j <= 8; j++) {
      node33.writeSingleRegister(j, 0x0200);
      if (j == 1) {
        Blynk.virtualWrite(V46, LOW);
      } else if (j == 2) {
        Blynk.virtualWrite(V47, LOW);
      } else if (j == 3) {
        Blynk.virtualWrite(V48, LOW);
      } else if (j == 4) {
        Blynk.virtualWrite(V49, LOW);
      } else if (j == 5) {
        Blynk.virtualWrite(V50, LOW);
      } else if (j == 6) {
        Blynk.virtualWrite(V51, LOW);
      } else if (j == 7) {
        Blynk.virtualWrite(V52, LOW);
      } else if (j == 8) {
        Blynk.virtualWrite(V53, LOW);
      }
      delay(100);
    }
    count8r_3 = 0;
  }
  if (param.asInt() == 1){
    for (int j = 1; j <= 8; j++) {
      node33.writeSingleRegister(j, 0x0100);
      if (j == 1) {
        Blynk.virtualWrite(V46, HIGH);
      } else if (j == 2) {
        Blynk.virtualWrite(V47, HIGH);
      } else if (j == 3) {
        Blynk.virtualWrite(V48, HIGH);
      } else if (j == 4) {
        Blynk.virtualWrite(V49, HIGH);
      } else if (j == 5) {
        Blynk.virtualWrite(V50, HIGH);
      } else if (j == 6) {
        Blynk.virtualWrite(V51, HIGH);
      } else if (j == 7) {
        Blynk.virtualWrite(V52, HIGH);
      } else if (j == 8) {
        Blynk.virtualWrite(V53, HIGH);
      }
      delay(100);
    }
    count8r_3 = 8;
  }
}

void Check8Relay3() {
  if (count8r_3 == 8) {
    Blynk.virtualWrite(V54, HIGH);
  } else {
    Blynk.virtualWrite(V54, LOW);
  }
}

//============================[Device 4]============================
BLYNK_WRITE(V66){
  if (param.asInt() == 0){
    node34.writeSingleRegister(1, 0x0200);
    count8r_4 -= 1;
  }
  if (param.asInt() == 1){
    node34.writeSingleRegister(1, 0x0100);
    count8r_4 += 1;
  }
  Check8Relay4();
}

BLYNK_WRITE(V67){
  if (param.asInt() == 0){
    node34.writeSingleRegister(2, 0x0200);
    count8r_4 -= 1;
  }
  if (param.asInt() == 1){
    node34.writeSingleRegister(2, 0x0100);
    count8r_4 += 1;
  }
  Check8Relay4();
}

BLYNK_WRITE(V68){
  if (param.asInt() == 0){
    node34.writeSingleRegister(3, 0x0200);
    count8r_4 -= 1;
  }
  if (param.asInt() == 1){
    node34.writeSingleRegister(3, 0x0100);
    count8r_4 += 1;
  }
  Check8Relay4();
}

BLYNK_WRITE(V69){
  if (param.asInt() == 0){
    node34.writeSingleRegister(4, 0x0200);
    count8r_4 -= 1;
  }
  if (param.asInt() == 1){
    node34.writeSingleRegister(4, 0x0100);
    count8r_4 += 1;
  }
  Check8Relay4();
}

BLYNK_WRITE(V70){
  if (param.asInt() == 0){
    node34.writeSingleRegister(5, 0x0200);
    count8r_4 -= 1;
  }
  if (param.asInt() == 1){
    node34.writeSingleRegister(5, 0x0100);
    count8r_4 += 1;
  }
  Check8Relay4();
}

BLYNK_WRITE(V71){
  if (param.asInt() == 0){
    node34.writeSingleRegister(6, 0x0200);
    count8r_4 -= 1;
  }
  if (param.asInt() == 1){
    node34.writeSingleRegister(6, 0x0100);
    count8r_4 += 1;
  }
  Check8Relay4();
}

BLYNK_WRITE(V72){
  if (param.asInt() == 0){
    node34.writeSingleRegister(7, 0x0200);
    count8r_4 -= 1;
  }
  if (param.asInt() == 1){
    node34.writeSingleRegister(7, 0x0100);
    count8r_4 += 1;
  }
  Check8Relay4();
}

BLYNK_WRITE(V73){
  if (param.asInt() == 0){
    node34.writeSingleRegister(8, 0x0200);
    count8r_4 -= 1;
  }
  if (param.asInt() == 1)
  {
    node34.writeSingleRegister(8, 0x0100);
    count8r_4 += 1;
  }
  Check8Relay4();
}

BLYNK_WRITE(V74){
  if (param.asInt() == 0){
    for (int j = 1; j <= 8; j++) {
      node34.writeSingleRegister(j, 0x0200);
      if (j == 1) {
        Blynk.virtualWrite(V66, LOW);
      } else if (j == 2) {
        Blynk.virtualWrite(V67, LOW);
      } else if (j == 3) {
        Blynk.virtualWrite(V68, LOW);
      } else if (j == 4) {
        Blynk.virtualWrite(V69, LOW);
      } else if (j == 5) {
        Blynk.virtualWrite(V70, LOW);
      } else if (j == 6) {
        Blynk.virtualWrite(V71, LOW);
      } else if (j == 7) {
        Blynk.virtualWrite(V72, LOW);
      } else if (j == 8) {
        Blynk.virtualWrite(V73, LOW);
      }
      delay(100);
    }
    count8r_4 = 0;
  }
  if (param.asInt() == 1){
    for (int j = 1; j <= 8; j++) {
      node34.writeSingleRegister(j, 0x0100);
      if (j == 1) {
        Blynk.virtualWrite(V66, HIGH);
      } else if (j == 2) {
        Blynk.virtualWrite(V67, HIGH);
      } else if (j == 3) {
        Blynk.virtualWrite(V68, HIGH);
      } else if (j == 4) {
        Blynk.virtualWrite(V69, HIGH);
      } else if (j == 5) {
        Blynk.virtualWrite(V70, HIGH);
      } else if (j == 6) {
        Blynk.virtualWrite(V71, HIGH);
      } else if (j == 7) {
        Blynk.virtualWrite(V72, HIGH);
      } else if (j == 8) {
        Blynk.virtualWrite(V73, HIGH);
      }
      delay(100);
    }
    count8r_4 = 8;
  }
}

void Check8Relay4() {
  if (count8r_4 == 8) {
    Blynk.virtualWrite(V74, HIGH);
  } else {
    Blynk.virtualWrite(V74, LOW);
  }
}

//============================[Device 5]============================
BLYNK_WRITE(V86){
  if (param.asInt() == 0){
    node35.writeSingleRegister(1, 0x0200);
    count8r_5 -= 1;
  }
  if (param.asInt() == 1){
    node35.writeSingleRegister(1, 0x0100);
    count8r_5 += 1;
  }
  Check8Relay5();
}

BLYNK_WRITE(V87){
  if (param.asInt() == 0){
    node35.writeSingleRegister(2, 0x0200);
    count8r_5 -= 1;
  }
  if (param.asInt() == 1){
    node35.writeSingleRegister(2, 0x0100);
    count8r_5 += 1;
  }
  Check8Relay5();
}

BLYNK_WRITE(V88){
  if (param.asInt() == 0){
    node35.writeSingleRegister(3, 0x0200);
    count8r_5 -= 1;
  }
  if (param.asInt() == 1){
    node35.writeSingleRegister(3, 0x0100);
    count8r_5 += 1;
  }
  Check8Relay5();
}

BLYNK_WRITE(V89){
  if (param.asInt() == 0){
    node35.writeSingleRegister(4, 0x0200);
    count8r_5 -= 1;
  }
  if (param.asInt() == 1){
    node35.writeSingleRegister(4, 0x0100);
    count8r_5 += 1;
  }
  Check8Relay5();
}

BLYNK_WRITE(V90){
  if (param.asInt() == 0){
    node35.writeSingleRegister(5, 0x0200);
    count8r_5 -= 1;
  }
  if (param.asInt() == 1){
    node35.writeSingleRegister(5, 0x0100);
    count8r_5 += 1;
  }
  Check8Relay5();
}

BLYNK_WRITE(V91){
  if (param.asInt() == 0){
    node35.writeSingleRegister(6, 0x0200);
    count8r_5 -= 1;
  }
  if (param.asInt() == 1){
    node35.writeSingleRegister(6, 0x0100);
    count8r_5 += 1;
  }
  Check8Relay5();
}

BLYNK_WRITE(V92){
  if (param.asInt() == 0){
    node35.writeSingleRegister(7, 0x0200);
    count8r_5 -= 1;
  }
  if (param.asInt() == 1){
    node35.writeSingleRegister(7, 0x0100);
    count8r_5 += 1;
  }
  Check8Relay5();
}

BLYNK_WRITE(V93){
  if (param.asInt() == 0){
    node35.writeSingleRegister(8, 0x0200);
    count8r_5 -= 1;
  }
  if (param.asInt() == 1)
  {
    node35.writeSingleRegister(8, 0x0100);
    count8r_5 += 1;
  }
  Check8Relay5();
}

BLYNK_WRITE(V94){
  if (param.asInt() == 0){
    for (int j = 1; j <= 8; j++) {
      node35.writeSingleRegister(j, 0x0200);
      if (j == 1) {
        Blynk.virtualWrite(V86, LOW);
      } else if (j == 2) {
        Blynk.virtualWrite(V87, LOW);
      } else if (j == 3) {
        Blynk.virtualWrite(V88, LOW);
      } else if (j == 4) {
        Blynk.virtualWrite(V89, LOW);
      } else if (j == 5) {
        Blynk.virtualWrite(V90, LOW);
      } else if (j == 6) {
        Blynk.virtualWrite(V91, LOW);
      } else if (j == 7) {
        Blynk.virtualWrite(V92, LOW);
      } else if (j == 8) {
        Blynk.virtualWrite(V93, LOW);
      }
      delay(100);
    }
    count8r_5 = 0;
  }
  if (param.asInt() == 1){
    for (int j = 1; j <= 8; j++) {
      node35.writeSingleRegister(j, 0x0100);
      if (j == 1) {
        Blynk.virtualWrite(V86, HIGH);
      } else if (j == 2) {
        Blynk.virtualWrite(V87, HIGH);
      } else if (j == 3) {
        Blynk.virtualWrite(V88, HIGH);
      } else if (j == 4) {
        Blynk.virtualWrite(V89, HIGH);
      } else if (j == 5) {
        Blynk.virtualWrite(V90, HIGH);
      } else if (j == 6) {
        Blynk.virtualWrite(V91, HIGH);
      } else if (j == 7) {
        Blynk.virtualWrite(V92, HIGH);
      } else if (j == 8) {
        Blynk.virtualWrite(V93, HIGH);
      }
      delay(100);
    }
    count8r_5 = 8;
  }
}

void Check8Relay5() {
  if (count8r_5 == 8) {
    Blynk.virtualWrite(V94, HIGH);
  } else {
    Blynk.virtualWrite(V94, LOW);
  }
}

//============================[Device 6]============================
BLYNK_WRITE(V106){
  if (param.asInt() == 0){
    node36.writeSingleRegister(1, 0x0200);
    count8r_6 -= 1;
  }
  if (param.asInt() == 1){
    node36.writeSingleRegister(1, 0x0100);
    count8r_6 += 1;
  }
  Check8Relay6();
}

BLYNK_WRITE(V107){
  if (param.asInt() == 0){
    node36.writeSingleRegister(2, 0x0200);
    count8r_6 -= 1;
  }
  if (param.asInt() == 1){
    node36.writeSingleRegister(2, 0x0100);
    count8r_6 += 1;
  }
  Check8Relay6();
}

BLYNK_WRITE(V108){
  if (param.asInt() == 0){
    node36.writeSingleRegister(3, 0x0200);
    count8r_6 -= 1;
  }
  if (param.asInt() == 1){
    node36.writeSingleRegister(3, 0x0100);
    count8r_6 += 1;
  }
  Check8Relay6();
}

BLYNK_WRITE(V109){
  if (param.asInt() == 0){
    node36.writeSingleRegister(4, 0x0200);
    count8r_6 -= 1;
  }
  if (param.asInt() == 1){
    node36.writeSingleRegister(4, 0x0100);
    count8r_6 += 1;
  }
  Check8Relay6();
}

BLYNK_WRITE(V110){
  if (param.asInt() == 0){
    node36.writeSingleRegister(5, 0x0200);
    count8r_6 -= 1;
  }
  if (param.asInt() == 1){
    node36.writeSingleRegister(5, 0x0100);
    count8r_6 += 1;
  }
  Check8Relay6();
}

BLYNK_WRITE(V111){
  if (param.asInt() == 0){
    node36.writeSingleRegister(6, 0x0200);
    count8r_6 -= 1;
  }
  if (param.asInt() == 1){
    node36.writeSingleRegister(6, 0x0100);
    count8r_6 += 1;
  }
  Check8Relay6();
}

BLYNK_WRITE(V112){
  if (param.asInt() == 0){
    node36.writeSingleRegister(7, 0x0200);
    count8r_6 -= 1;
  }
  if (param.asInt() == 1){
    node36.writeSingleRegister(7, 0x0100);
    count8r_6 += 1;
  }
  Check8Relay6();
}

BLYNK_WRITE(V113){
  if (param.asInt() == 0){
    node36.writeSingleRegister(8, 0x0200);
    count8r_6 -= 1;
  }
  if (param.asInt() == 1)
  {
    node36.writeSingleRegister(8, 0x0100);
    count8r_6 += 1;
  }
  Check8Relay6();
}

BLYNK_WRITE(V114){
  if (param.asInt() == 0){
    for (int j = 1; j <= 8; j++) {
      node36.writeSingleRegister(j, 0x0200);
      if (j == 1) {
        Blynk.virtualWrite(V106, LOW);
      } else if (j == 2) {
        Blynk.virtualWrite(V107, LOW);
      } else if (j == 3) {
        Blynk.virtualWrite(V108, LOW);
      } else if (j == 4) {
        Blynk.virtualWrite(V109, LOW);
      } else if (j == 5) {
        Blynk.virtualWrite(V110, LOW);
      } else if (j == 6) {
        Blynk.virtualWrite(V111, LOW);
      } else if (j == 7) {
        Blynk.virtualWrite(V112, LOW);
      } else if (j == 8) {
        Blynk.virtualWrite(V113, LOW);
      }
      delay(100);
    }
    count8r_6 = 0;
  }
  if (param.asInt() == 1){
    for (int j = 1; j <= 8; j++) {
      node36.writeSingleRegister(j, 0x0100);
      if (j == 1) {
        Blynk.virtualWrite(V106, HIGH);
      } else if (j == 2) {
        Blynk.virtualWrite(V107, HIGH);
      } else if (j == 3) {
        Blynk.virtualWrite(V108, HIGH);
      } else if (j == 4) {
        Blynk.virtualWrite(V109, HIGH);
      } else if (j == 5) {
        Blynk.virtualWrite(V110, HIGH);
      } else if (j == 6) {
        Blynk.virtualWrite(V111, HIGH);
      } else if (j == 7) {
        Blynk.virtualWrite(V112, HIGH);
      } else if (j == 8) {
        Blynk.virtualWrite(V113, HIGH);
      }
      delay(100);
    }
    count8r_6 = 8;
  }
}

void Check8Relay6() {
  if (count8r_6 == 8) {
    Blynk.virtualWrite(V114, HIGH);
  } else {
    Blynk.virtualWrite(V114, LOW);
  }
}
