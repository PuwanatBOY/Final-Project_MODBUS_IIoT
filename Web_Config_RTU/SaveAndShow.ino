void handleRoot () {
  server.send ( 200, "text/html", index_html );
}

void handleForm() {
  String token = server.arg("token");
  String ssidn = server.arg("namessid");
  String passn = server.arg("pass");
  if (token != "") {
    Serial.println("==================================================");
    Serial.println("Writing...");
    EEPROM.writeString(0, token);
    EEPROM.commit();
    Serial.println("Reading...");
    tok = EEPROM.readString(0);
    Serial.print("New TOKEN:");
    Serial.println(tok);
    Serial.println("==================================================");
  }
  if (ssidn != "") {
    Serial.println("==================================================");
    Serial.println("Writing...");
    EEPROM.writeString(48, ssidn);
    EEPROM.commit();
    Serial.println("Reading...");
    sid = EEPROM.readString(48);
    Serial.print("New SSID:");
    Serial.println(sid);
    Serial.println("==================================================");
  }
  if (passn != "") {
    Serial.println("==================================================");
    Serial.println("Writing...");
    EEPROM.writeString(70, passn);
    EEPROM.commit();
    Serial.println("Reading...");
    pass = EEPROM.readString(70);
    Serial.print("New PASS:");
    Serial.println(pass);
    Serial.println("==================================================");
  }

  String se = "<a href='/'> Go Back </a>";
  server.send(200, "text/html", se);
}
