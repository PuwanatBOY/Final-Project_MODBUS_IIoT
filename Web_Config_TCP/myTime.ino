WidgetLED led101(V9);
WidgetLED led201(V10);
WidgetLED led301(V11);
WidgetLED led401(V12);
WidgetLED led501(V13);
WidgetLED led601(V14);
WidgetLED led701(V15);
WidgetLED led801(V16);
WidgetLED led901(V17);

void myTimeEvent1() {
  bool SaveCoil[] = {bitA, bitB, bitC, bitD, bitE, bitF, bitG, bitH, bitI};
  if (mb.isConnected(RemoteIP)) {
    mb.readCoil(RemoteIP, 10, SaveCoil, 9, CallBack); delay(40); mb.task();
  }
  else {
    mb.connect(RemoteIP); delay(10); mb.task();
  }

//  Serial.println(SaveCoil[0]);
//  Serial.println(SaveCoil[1]);
//  Serial.println(SaveCoil[2]);
//  Serial.println(SaveCoil[3]);
//  Serial.println(SaveCoil[4]);
//  Serial.println(SaveCoil[5]);
//  Serial.println(SaveCoil[6]);
//  Serial.println(SaveCoil[7]);
//  Serial.println(SaveCoil[8]);
//  Serial.println("---------------------------------------------------");

  if (SaveCoil[0] == 1) {
    led101.on();
  } else {
    led101.off();
  }

  if (SaveCoil[1] == 1) {
    led201.on();
  } else {
    led201.off();
  }

  if (SaveCoil[2] == 1) {
    led301.on();
  } else {
    led301.off();
  }

  if (SaveCoil[3] == 1) {
    led401.on();
  } else {
    led401.off();
  }

  if (SaveCoil[4] == 1) {
    led501.on();
  } else {
    led501.off();
  }

  if (SaveCoil[5] == 1) {
    led601.on();
  } else {
    led601.off();
  }

  if (SaveCoil[6] == 1) {
    led701.on();
  } else {
    led701.off();
  }

  if (SaveCoil[7] == 1) {
    led801.on();
  } else {
    led801.off();
  }

  if (SaveCoil[8] == 1) {
    led901.on();
  } else {
    led901.off();
  }
}
