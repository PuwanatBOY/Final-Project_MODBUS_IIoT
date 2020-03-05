void startBlynkServer(){
  delay(3000);
    Serial.println("Token");
    tok = EEPROM.readString(0);
    authB  = tok.c_str();
    Serial.println(authB);
    
    Serial.println("Serve");
    serv = EEPROM.readString(40);
    serveB  = serv.c_str();
    Serial.println(serveB);
    
    Serial.println("Port");
    pot = EEPROM.readString(70);
    portB  = pot.toInt();
    Serial.println(portB);
    
    Serial.println("SSID");
    sid = EEPROM.readString(80);
    ssidB = sid.c_str();
    Serial.println(ssidB);
    
    Serial.println("PASS");
    pass = EEPROM.readString(110);
    passB = pass.c_str();
    Serial.println(passB);
    delay(1000);
    //Blynk.begin(authB, ssidB, passB, "oasiskit.com", 8080);
    Blynk.begin(authB, ssidB, passB, serveB, portB);
    timer.setInterval(250L, myTimeEvent);
//    Serial.println("IP address: ");
//    Serial.println(WiFi.localIP());
}

void startBlynk(){
  delay(3000);
    Serial.println("Token");
    tok = EEPROM.readString(0);
    authB  = tok.c_str();
    Serial.println(authB);
    
    Serial.println("SSID");
    sid = EEPROM.readString(80);
    ssidB = sid.c_str();
    Serial.println(ssidB);
    
    Serial.println("PASS");
    pass = EEPROM.readString(110);
    passB = pass.c_str();
    Serial.println(passB);
    delay(1000);
    Blynk.begin(authB, ssidB, passB);
    timer.setInterval(250L, myTimeEvent);
//    Serial.println("IP address: ");
//    Serial.println(WiFi.localIP());
}
