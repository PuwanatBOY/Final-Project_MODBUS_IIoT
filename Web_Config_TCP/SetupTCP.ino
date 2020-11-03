bool CallBack(Modbus::ResultCode event, uint16_t transactionId, void* data) { // Modbus Transaction callback
  if (event != Modbus::EX_SUCCESS) // If transaction got an error
    Serial.printf("Modbus result: %02X\n", event); // Display Modbus error code
  if (event == Modbus::EX_TIMEOUT) { // If Transaction timeout took place
    mb.disconnect(RemoteIP); // Close connection to slave and
    mb.dropTransactions(); // Cancel all waiting transactions
  }
  return true;
}

void setup_0() {
  ipa = EEPROM.readString(140);
  ipb = EEPROM.readString(145);
  ipc = EEPROM.readString(150);
  ipd = EEPROM.readString(155);
  RemoteIP = IPAddress(ipa.toInt(), ipb.toInt(), ipc.toInt(), ipd.toInt());
  mb.master();
}
