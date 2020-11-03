void handleRoot () {
  server.send ( 200, "text/html", index_html );
}

void handleShow () {
  tok = EEPROM.readString(0);
  serv = EEPROM.readString(40);
  pot = EEPROM.readString(70);
  sid = EEPROM.readString(80);
  pass = EEPROM.readString(110);
  ipa = EEPROM.readString(140);
  ipb = EEPROM.readString(145);
  ipc = EEPROM.readString(150);
  ipd = EEPROM.readString(155);
  String IPslave = ipa + "." + ipb + "." + ipc + "." + ipd;
  String sh = "<!DOCTYPE HTML><html><head>";
  sh += "<style>html { font-family: Helvetica; display: inline-block; margin: 5px auto; text-align: center;}";
  sh += ".button { background-color: #0000ff; border: none; color: white; padding: 5px 5px;";
  sh += "text-decoration: none; font-size: 20px; margin: 5px; cursor: pointer;}";
  sh += ".container {padding: 16px; }";
  sh += "form {border: 10px solid #ffff66; text-align: center;}";
  sh += "input[type = text].one, input[type = password] { width: 30%; padding: 15px 20px; margin: 8px 0; border: 1px solid #ccc; box-sizing: border-box;}";
  sh += "input[type=text].two{ width: 15%; padding: 15px 20px; margin: 20px 0; border: 1px solid #ccc; box-sizing: border-box;}";
  sh += "input[type=text].three{ width: 20%; padding: 15px 20px; margin: 20px 0; border: 1px solid #ccc; box-sizing: border-box;}";
  sh += "</style> <title>Show data TCP</title>";
  sh += "<meta name = \"viewport\" content = \"width=device-width, initial-scale=1\">";
  sh += "</head> <body>";
  sh += "<h1>Data Connected [ Modbus TCP/IP ]</h1>";
  sh += "<div class=\"container\">";
  sh += "<form action=\"/config\"><p>";
  sh += "Token Blynk : &nbsp<input id=\"token\" class=\"one\" type=\"text\" name=\"token\" value=\"" + tok + "\" readonly><br><p></p>";
  sh += "Server Blynk : &nbsp<input id=\"serve\" type=\"text\" class=\"two\" name=\"serve\" value=\"" + serv + "\" readonly><br><p></p>";
  sh += "<a style=\"margin-left: 65px;\"></a>Port :&nbsp<input class=\"two\" id=\"port\" type=\"text\" name=\"port\" value=\"" + pot + "\" readonly><br><p></p>";
  sh += "</a>IP slave device : &nbsp<input class=\"three\" id=\"slave\" type=\"text\" name=\"slave\" value=\"" + IPslave + "\" readonly><br><p></p>";
  sh += "<a style=\"margin-left: 60px;\"></a> SSID : &nbsp<input id=\"namessid\" class=\"one\" type=\"text\" name=\"namessid\" value=\"" + sid + "\" readonly><br><p></p>";
  sh += "<a style=\"margin-left: 30px;\"></a> Password :  &nbsp<input id=\"pass\" class=\"one\" type=\"text\" name=\"pass\" value=\"" + pass + "\" readonly>";
  sh += "<p><input type=\"Submit\" value=\"go Config\" class=\"button\"> </p>";
  sh += "</form ></div></body> </html>";
  server.send ( 200, "text/html", sh );
}

void handleForm() {
  String token = server.arg("token");
  String serve = server.arg("serve");
  String port = server.arg("port");
  String ssidn = server.arg("namessid");
  String passn = server.arg("pass");
  String sta = server.arg("yesno");
  String ipA = server.arg("ipA");
  String ipB = server.arg("ipB");
  String ipC = server.arg("ipC");
  String ipD = server.arg("ipD");
  //========================================================================================
  if (token != "" && token != " ") {
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
  //=========================================================================================
  if (sta == "yes") {
    if (serve != "" && serve != " ") {
      Serial.println("==================================================");
      Serial.println("Writing...");
      EEPROM.writeString(40, serve);
      EEPROM.commit();
      Serial.println("Reading...");
      serv = EEPROM.readString(40);
      Serial.print("New Server:");
      Serial.println(serv);
      Serial.println("==================================================");
    }
    if (port != "" && port != " ") {
      Serial.println("==================================================");
      Serial.println("Writing...");
      EEPROM.writeString(70, port);
      EEPROM.commit();
      Serial.println("Reading...");
      pot = EEPROM.readString(70);
      Serial.print("New Port:");
      Serial.println(pot);
      Serial.println("==================================================");
    }
  } else if (sta == "no") {
    Serial.println("==================================================");
    Serial.println("Writing...");
    EEPROM.writeString(40, "-");
    EEPROM.commit();
    Serial.println("Reading...");
    serv = EEPROM.readString(40);
    Serial.print("New Server: NULL");
    Serial.println(serv);
    Serial.println("==================================================");
    Serial.println("==================================================");
    Serial.println("Writing...");
    EEPROM.writeString(70, "-");
    EEPROM.commit();
    Serial.println("Reading...");
    pot = EEPROM.readString(70);
    Serial.print("New Port: NULL");
    Serial.println(pot);
    Serial.println("==================================================");
  }
  //=========================================================================================
  if (ssidn != "" && ssidn != " ") {
    Serial.println("==================================================");
    Serial.println("Writing...");
    EEPROM.writeString(80, ssidn);
    EEPROM.commit();
    Serial.println("Reading...");
    sid = EEPROM.readString(80);
    Serial.print("New SSID:");
    Serial.println(sid);
    Serial.println("==================================================");
  }
  //=========================================================================================
  if (passn != "" && passn != " ") {
    Serial.println("==================================================");
    Serial.println("Writing...");
    EEPROM.writeString(110, passn);
    EEPROM.commit();
    Serial.println("Reading...");
    pass = EEPROM.readString(110);
    Serial.print("New PASS:");
    Serial.println(pass);
    Serial.println("==================================================");
  }
  if (ipA != "" && ipA != " " && ipB != "" && ipB != " " && ipC != "" && ipC != " " && ipD != "" && ipD != " ") {
    Serial.println("==================================================");
    Serial.println("Writing...");
    EEPROM.writeString(140, ipA);
    EEPROM.commit();
    EEPROM.writeString(145, ipB);
    EEPROM.commit();
    EEPROM.writeString(150, ipC);
    EEPROM.commit();
    EEPROM.writeString(155, ipD);
    EEPROM.commit();
    Serial.println("Reading...");
    ipa = EEPROM.readString(140);
    ipb = EEPROM.readString(145);
    ipc = EEPROM.readString(150);
    ipd = EEPROM.readString(155);
    Serial.print("New PASS:" + ipa + "." + ipb + "." + ipc + "." + ipd);
  }
  Clear();
  printSave();
  String se;
  delay(500);
  Clear();
  for (i = 5; i >= 0; i--) {
    Serial.println("Restart in " + String(i) + " Seconde");
    se = "<p><p/><br><h2 style=\"text-align: center;\">restart in " + String(i) + " second</h2>";
    server.send(200, "text/html", se);
    printRestart(i);
    delay(1000);
  }
  ESP.restart();
}
