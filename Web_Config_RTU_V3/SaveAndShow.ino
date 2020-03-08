void handleRoot () {
  server.send ( 200, "text/html", index_html );
}

void handleShow () {
  tok = EEPROM.readString(0);
  serv = EEPROM.readString(40);
  pot = EEPROM.readString(70);
  sid = EEPROM.readString(80);
  pass = EEPROM.readString(110);
  String sh = "<!DOCTYPE HTML><html><head>";
  sh += "<style>html { font-family: Helvetica; display: inline-block; margin: 5px auto; text-align: center;}";
  sh += ".button { background-color: #99cc00; border: none; color: white; padding: 5px 5px;";
  sh += "text-decoration: none; font-size: 20px; margin: 5px; cursor: pointer;}";
  sh += ".container {padding: 16px; }";
  sh += "form {border: 10px solid #4040bf; text-align: center;}";
  sh += "input[type = text], input[type = password] { width: 50%; padding: 8px 20px; margin: 8px 0; display: inline - block; border: 1px solid #ccc; box-sizing: border-box;}";
  sh += "</style> <title>Show Connect </title>";
  sh += "<meta name = \"viewport\" content = \"width=device-width, initial-scale=1\">";
  sh += "</head> <body>";
  sh += "<h1>Data Connected </h1>";
  sh += "<div class=\"container\" style=\"text-align: left;\">";
  sh += "<form action=\"/config\">";
  sh += "Token Blynk: <br><input id=\"token\" type=\"text\" name=\"token\" value=\"" + tok + "\" readonly>";
  sh += "<br><p> </p>";
  sh += "Server Blynk: <br><input id=\"serve\" type=\"text\" name=\"serve\" value=\"" + serv + "\" readonly>";
  sh += "<br><p> </p>";
  sh += "Port: <br><input id=\"port\" type=\"text\" name=\"port\" value=\"" + pot + "\" readonly>";
  sh += "<br><p> </p>";
  sh += "SSID: <br><input id=\"namessid\" type=\"text\" name=\"namessid\" value=\"" + sid + "\" readonly>";
  sh += "<br><p> </p>";
  sh += "Password: <br><input id=\"pass\" type=\"text\" name=\"pass\" value=\"" + pass + "\" readonly>";
  sh += "<p><input type=\"Submit\" value=\"to config\" class=\"button\"> </p>";
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
    EEPROM.writeString(40, "");
    EEPROM.commit();
    Serial.println("Reading...");
    serv = EEPROM.readString(40);
    Serial.print("New Server: NULL");
    Serial.println(serv);
    Serial.println("==================================================");
    Serial.println("==================================================");
    Serial.println("Writing...");
    EEPROM.writeString(70, "");
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
  Clear();
  printSave();
  String se = "<a href='/'> Go Back </a>";
  server.send(200, "text/html", se);
}
