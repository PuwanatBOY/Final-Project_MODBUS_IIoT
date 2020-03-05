void myTimeEvent() {
  uint8_t result;
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
    }else if (node1.getResponseBuffer(0x00) == 2 && xx == 1) {
      led2.off();
      xx = 0;
    }
    //================== state 3 ===============================
    else if (node1.getResponseBuffer(0x00) == 4 && yy == 0) {
      led3.on();
      yy = 1;
    }else if (node1.getResponseBuffer(0x00) == 4 && yy == 1) {
      led3.off();
      yy = 0;
    }
    //================== state 4 ===============================
    else if (node1.getResponseBuffer(0x00) == 8 && zz == 0) {
      led4.on();
      zz = 1;
    }else if (node1.getResponseBuffer(0x00) == 8 && zz == 1) {
      led4.off();
      zz = 0;
    }
  }
}
