void startBlynk(){
  delay(3000);
    Serial.println("Token");
    tok = EEPROM.readString(0);
    authB  = tok.c_str();
    Serial.println(authB);
    Serial.println("SSID");
    sid = EEPROM.readString(48);
    ssidB = sid.c_str();
    Serial.println(ssidB);
    Serial.println("PASS");
    pass = EEPROM.readString(70);
    passB = pass.c_str();
    Serial.println(passB);
    delay(1000);
    Blynk.begin(authB, ssidB, passB, "oasiskit.com", 8080);
    timer.setInterval(250L, myTimeEvent);
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}
