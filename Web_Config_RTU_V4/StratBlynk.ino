void startBlynkServer(){
  delay(1000);
    Serial.print("Token: ");
    tok = EEPROM.readString(0);
    authB  = tok.c_str();
    Serial.println(authB);
    
    Serial.print("Server: ");
    serv = EEPROM.readString(40);
    serveB  = serv.c_str();
    Serial.println(serveB);
    
    Serial.print("Port: ");
    pot = EEPROM.readString(70);
    portB  = pot.toInt();
    Serial.println(portB);
    
    Serial.print("SSID: ");
    sid = EEPROM.readString(80);
    ssidB = sid.c_str();
    Serial.println(ssidB);
    
    Serial.print("PASS: ");
    pass = EEPROM.readString(110);
    passB = pass.c_str();
    Serial.println(passB);
    delay(1000);
    //Blynk.begin(authB, ssidB, passB, "oasiskit.com", 8080);
    Blynk.begin(authB, ssidB, passB, serveB, portB);
    timer.setInterval(250L, myTimeEvent1);
    timer.setInterval(300000L, myTimeEvent2);
}

void startBlynk(){
  delay(1000);
    Serial.print("Token: ");
    tok = EEPROM.readString(0);
    authB  = tok.c_str();
    Serial.println(authB);
    
    Serial.print("SSID: ");
    sid = EEPROM.readString(80);
    ssidB = sid.c_str();
    Serial.println(ssidB);
    
    Serial.print("PASS: ");
    pass = EEPROM.readString(110);
    passB = pass.c_str();
    Serial.println(passB);
    delay(1000);
    Blynk.begin(authB, ssidB, passB);
    timer.setInterval(250L, myTimeEvent1);
    timer.setInterval(30000L, myTimeEvent2);
}
