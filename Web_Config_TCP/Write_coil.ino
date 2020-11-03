BLYNK_WRITE(V1) {
  if (param.asInt() == 0) {
    Write_single_coil(0, 0);
    count7r -= 1;
  }
  if (param.asInt() == 1) {
    Write_single_coil(0, 1);
    count7r += 1;
  }
  Check7Relay();
}

BLYNK_WRITE(V2) {
  if (param.asInt() == 0) {
    Write_single_coil(1, 0);
    count7r -= 1;
  }
  if (param.asInt() == 1) {
    Write_single_coil(1, 1);
    count7r += 1;
  }
  Check7Relay();
}

BLYNK_WRITE(V3) {
  if (param.asInt() == 0) {
    Write_single_coil(2, 0);
    count7r -= 1;
  }
  if (param.asInt() == 1) {
    Write_single_coil(2, 1);
    count7r += 1;
  }
  Check7Relay();
}

BLYNK_WRITE(V4) {
  if (param.asInt() == 0) {
    Write_single_coil(3, 0);
    count7r -= 1;
  }
  if (param.asInt() == 1) {
    Write_single_coil(3, 1);
    count7r += 1;
  }
  Check7Relay();
}

BLYNK_WRITE(V5) {
  if (param.asInt() == 0) {
    Write_single_coil(4, 0);
    count7r -= 1;
  }
  if (param.asInt() == 1) {
    Write_single_coil(4, 1);
    count7r += 1;
  }
  Check7Relay();
}

BLYNK_WRITE(V6) {
  if (param.asInt() == 0) {
    Write_single_coil(5, 0);
    count7r -= 1;
  }
  if (param.asInt() == 1) {
    Write_single_coil(5, 1);
    count7r += 1;
  }
  Check7Relay();
}

BLYNK_WRITE(V7) {
  if (param.asInt() == 0) {
    Write_single_coil(6, 0);
    count7r -= 1;
  }
  if (param.asInt() == 1) {
    Write_single_coil(6, 1);
    count7r += 1;
  }
  Check7Relay();
}

BLYNK_WRITE(V8) {
  if (param.asInt() == 0) {   // all relay off
    bool Scoil[] = {0, 0, 0, 0, 0, 0, 0};
    Write_multi_coil(0, Scoil, 7);
    Blynk.virtualWrite(V1, LOW);
    Blynk.virtualWrite(V2, LOW);
    Blynk.virtualWrite(V3, LOW);
    Blynk.virtualWrite(V4, LOW);
    Blynk.virtualWrite(V5, LOW);
    Blynk.virtualWrite(V6, LOW);
    Blynk.virtualWrite(V7, LOW);
    count7r = 0;
  }
  if (param.asInt() == 1) {   // all relay on
    bool Scoil[] = {1, 1, 1, 1, 1, 1, 1};
    Write_multi_coil(0, Scoil, 7);
    Blynk.virtualWrite(V1, HIGH);
    Blynk.virtualWrite(V2, HIGH);
    Blynk.virtualWrite(V3, HIGH);
    Blynk.virtualWrite(V4, HIGH);
    Blynk.virtualWrite(V5, HIGH);
    Blynk.virtualWrite(V6, HIGH);
    Blynk.virtualWrite(V7, HIGH);
    count7r = 7;
  }
}

void Check7Relay() {
  if (count7r == 7) {
    Blynk.virtualWrite(V8, HIGH);
  } else {
    Blynk.virtualWrite(V8, LOW);
  }
}

void Write_single_coil(const int OffsetAddr, bool bitX) {
  if (mb.isConnected(RemoteIP)) {
    mb.writeCoil(RemoteIP, OffsetAddr, bitX, CallBack); delay(100); mb.task();
  }
  else {
    mb.connect(RemoteIP); delay(10); mb.task();
  }
}

void Write_multi_coil(const int OffsetAddr, bool SaveCoil[], int nCoilCount) {
  if (mb.isConnected(RemoteIP)) {
    mb.writeCoil(RemoteIP, OffsetAddr, SaveCoil, nCoilCount, CallBack); delay(100); mb.task();
  }
  else {
    mb.connect(RemoteIP); delay(10); mb.task();
  }
}
