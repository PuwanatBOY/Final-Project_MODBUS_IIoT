void preTransmission() {
  digitalWrite(MAX485_Monitor, 1);
  digitalWrite(MAX485_Ctrl, 1);
}
void postTransmission() {
  digitalWrite(MAX485_Monitor, 0);
  digitalWrite(MAX485_Ctrl, 0);
}
void setup_0() {
  pinMode(MAX485_Monitor, OUTPUT);
  pinMode(MAX485_Ctrl, OUTPUT);
  Serial2.begin(9600, SERIAL_8N1, MAX485_Rx, MAX485_Tx);
  postTransmission(); // Init in receive mode
  node1.begin(1, Serial2); // Modbus slave ID 1
  node8.begin(8, Serial2); // Modbus slave ID 8
  node1.preTransmission(preTransmission);
  node8.preTransmission(preTransmission);
  node1.postTransmission(postTransmission);
  node8.postTransmission(postTransmission);
}
