void handleRoot () {
  server.send ( 200, "text/html", index_html );
}

void handleShow () {
  tok = EEPROM.readString(0);
  serv = EEPROM.readString(40);
  pot = EEPROM.readString(70);
  sid = EEPROM.readString(80);
  pass = EEPROM.readString(110);
  String IdSensor1 = EEPROM.readString(130);
  String IdSensor2 = EEPROM.readString(135);
  String IdSensor3 = EEPROM.readString(140);
  String IdSensor4 = EEPROM.readString(145);
  String IdSensor5 = EEPROM.readString(150);
  String IdSensor6 = EEPROM.readString(155);
  
  String IdRelayF1 = EEPROM.readString(160);
  String IdRelayF2 = EEPROM.readString(165);
  String IdRelayF3 = EEPROM.readString(170);
  String IdRelayF4 = EEPROM.readString(175);
  String IdRelayF5 = EEPROM.readString(180);
  String IdRelayF6 = EEPROM.readString(185);

  String IdRelayE1 = EEPROM.readString(190);
  String IdRelayE2 = EEPROM.readString(195);
  String IdRelayE3 = EEPROM.readString(200);
  String IdRelayE4 = EEPROM.readString(205);
  String IdRelayE5 = EEPROM.readString(210);
  String IdRelayE6 = EEPROM.readString(215);
  
  if (IdSensor1 == "500")IdSensor1 = "None";
  if (IdSensor2 == "500")IdSensor2 = "None";
  if (IdSensor3 == "500")IdSensor3 = "None";
  if (IdSensor4 == "500")IdSensor4 = "None";
  if (IdSensor5 == "500")IdSensor5 = "None";
  if (IdSensor6 == "500")IdSensor6 = "None";

  if (IdRelayF1 == "500")IdRelayF1 = "None";
  if (IdRelayF2 == "500")IdRelayF2 = "None";
  if (IdRelayF3 == "500")IdRelayF3 = "None";
  if (IdRelayF4 == "500")IdRelayF4 = "None";
  if (IdRelayF5 == "500")IdRelayF5 = "None";
  if (IdRelayF6 == "500")IdRelayF6 = "None";

  if (IdRelayE1 == "500") IdRelayE1 = "None";
  if (IdRelayE2 == "500") IdRelayE2 = "None";
  if (IdRelayE3 == "500") IdRelayE3 = "None";
  if (IdRelayE4 == "500") IdRelayE4 = "None";
  if (IdRelayE5 == "500") IdRelayE5 = "None";
  if (IdRelayE6 == "500")IdRelayE6 = "None";


  String sh = "<!DOCTYPE HTML><html style=\"height: auto; overflow-y: auto;\"><head>";
  sh += "<meta name=\"viewport\" content=\"width=device-width,height=device-height,initial-scale=1,maximum-scale=1,minimum-scale=1,user-scalable=no\">";
  sh += "<style>html { font-family: Helvetica; display: inline-block; margin: 5px auto; text-align: center;}";
  sh += ".button { background-color: #5200cc; border: none; color: white; padding: 5px 5px;";
  sh += "text-decoration: none; font-size: 20px; margin: 5px; cursor: pointer;}";
  sh += ".container {padding: 16px; }";
  sh += "form {border: 10px solid #80ffaa; text-align: center;}";
  sh += "input[type=text].one, input[type=password] { width: 30%; padding: 15px 20px; margin: 20px 0; border: 1px solid #ccc; box-sizing: border-box;}";
  sh += "input[type=text].two{ width: 15%; padding: 15px 20px; margin: 20px 0; border: 1px solid #ccc; box-sizing: border-box;}";
  sh += "input[type=text].three{ width: 100px; padding: 7px 5px;";
  sh += "border: 1px solid #ccc; box-sizing: border-box;}";
  sh += "</style>";
  sh += "<title>Show Connect RTU</title>";
  sh += "</head><body body style=\"height: auto; overflow-y: auto;\">";
  sh += "<h1>Data Connected [ Modbus RTU ]</h1>";
  sh += "<div class = \"container\" style=\"text-align: left;\">";
  sh += "<form action=\"/config\">";
  sh += "Token Blynk:  &nbsp <input class=\"one\" id=\"token\" type=\"text\" name=\"token\" value=\"" + tok + "\" readonly>";
  sh += "<br><p></p>";
  sh += "Server Blynk: &nbsp<input class=\"two\" id=\"serve\" type=\"text\" name=\"serve\" value=\"" + serv + "\" readonly>";
  sh += "<br><p></p>";
  sh += "<a style=\"margin-left: 65px;\"></a> Port: &nbsp<input class=\"two\" id=\"port\" type=\"text\" name=\"port\" value=\"" + pot + "\" readonly>";
  sh += "<br><p></p>";
  sh += "<a style=\"margin-left: 60px;\"></a>SSID: &nbsp<input class=\"one\" id=\"namessid\" type=\"text\" name=\"namessid\" value=\"" + sid + "\" readonly>";
  sh += "<br><p></p>";
  sh += "<a style=\"margin-left: 30px;\"></a>Password: &nbsp<input class=\"one\" id=\"pass\" type=\"text\" name=\"pass\" value=\"" + pass + "\" readonly><p>";
  sh += "<div style=\"border: 5px solid #75a3a3; text-align: center; width: 40%; margin-left: 30%;\"><p>";
  sh += "Modbus RTU Sensor H/T : <p>";
  sh += "ID device 1 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdSensor1 + "\"readonly><p>";
  sh += "ID device 2 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdSensor2 + "\"readonly><p>";
  sh += "ID device 3 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdSensor3 + "\"readonly><p>";
  sh += "ID device 4 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdSensor4 + "\"readonly><p>";
  sh += "ID device 5 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdSensor5 + "\"readonly><p>";
  sh += "ID device 6 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdSensor6 + "\"readonly><p>";
  sh += "</div><p><br>";
  sh += "<div style=\"border: 5px solid #75a3a3; text-align: center; width: 40%; margin-left: 30%;\"><p>";
  sh += "Modbus RTU Relay 4 : <p>";
  sh += "ID device 1 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdRelayF1 + "\"readonly><p>";
  sh += "ID device 2 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdRelayF2 + "\"readonly><p>";
  sh += "ID device 3 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdRelayF3 + "\"readonly><p>";
  sh += "ID device 4 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdRelayF4 + "\"readonly><p>";
  sh += "ID device 5 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdRelayF5 + "\"readonly><p>";
  sh += "ID device 6 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdRelayF6 + "\"readonly><p>";
  sh += "</div><p><br>";
  sh += "<div style=\"border: 5px solid #75a3a3; text-align: center; width: 40%; margin-left: 30%;\"><p>";
  sh += "Modbus RTU Relay 8 : <p>";
  sh += "ID device 1 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdRelayE1 + "\"readonly><p>";
  sh += "ID device 2 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdRelayE2 + "\"readonly><p>";
  sh += "ID device 3 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdRelayE3 + "\"readonly><p>";
  sh += "ID device 4 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdRelayE4 + "\"readonly><p>";
  sh += "ID device 5 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdRelayE5 + "\"readonly><p>";
  sh += "ID device 6 : &nbsp &nbsp<input class=\"three\" type=\"text\" value=\"" + IdRelayE6 + "\"readonly><p>";
  sh += "</div>";
  sh += "<p><input type=\"Submit\" value=\"go Config\" class=\"button\"></p>";
  sh += "</form></div></body></html>";
  server.send ( 200, "text/html", sh );
}

void handleForm() {
  String token = server.arg("token");
  String serve = server.arg("serve");
  String port = server.arg("port");
  String ssidn = server.arg("namessid");
  String passn = server.arg("pass");
  String sta = server.arg("yesno");

  String IdSensor1 = server.arg("IdSensor1");
  String IdSensor2 = server.arg("IdSensor2");
  String IdSensor3 = server.arg("IdSensor3");
  String IdSensor4 = server.arg("IdSensor4");
  String IdSensor5 = server.arg("IdSensor5");
  String IdSensor6 = server.arg("IdSensor6");

  String IdRelayF1 = server.arg("IdRelayF1");
  String IdRelayF2 = server.arg("IdRelayF2");
  String IdRelayF3 = server.arg("IdRelayF3");
  String IdRelayF4 = server.arg("IdRelayF4");
  String IdRelayF5 = server.arg("IdRelayF5");
  String IdRelayF6 = server.arg("IdRelayF6");

  String IdRelayE1 = server.arg("IdRelayE1");
  String IdRelayE2 = server.arg("IdRelayE2");
  String IdRelayE3 = server.arg("IdRelayE3");
  String IdRelayE4 = server.arg("IdRelayE4");
  String IdRelayE5 = server.arg("IdRelayE5");
  String IdRelayE6 = server.arg("IdRelayE6");
  //========================================================================================
  //  Serial.println("IdSensor2 is => "+IdSensor2);
  //  Serial.println("IdRelayF2 is => "+IdRelayF2);
  //  Serial.println("IdRelayE2 is => "+IdRelayE2);
  if (IdSensor1 == "")IdSensor1 = "500";
  if (IdSensor2 == "")IdSensor2 = "500";
  if (IdSensor3 == "")IdSensor3 = "500";
  if (IdSensor4 == "")IdSensor4 = "500";
  if (IdSensor5 == "")IdSensor5 = "500";
  if (IdSensor6 == "")IdSensor6 = "500";
  EEPROM.writeString(130, IdSensor1);
  EEPROM.commit();
  EEPROM.writeString(135, IdSensor2);
  EEPROM.commit();
  EEPROM.writeString(140, IdSensor3);
  EEPROM.commit();
  EEPROM.writeString(145, IdSensor4);
  EEPROM.commit();
  EEPROM.writeString(150, IdSensor5);
  EEPROM.commit();
  EEPROM.writeString(155, IdSensor6);
  EEPROM.commit();

  if (IdRelayF1 == "")IdRelayF1 = "500";
  if (IdRelayF2 == "")IdRelayF2 = "500";
  if (IdRelayF3 == "")IdRelayF3 = "500";
  if (IdRelayF4 == "")IdRelayF4 = "500";
  if (IdRelayF5 == "")IdRelayF5 = "500";
  if (IdRelayF6 == "")IdRelayF6 = "500";
  EEPROM.writeString(160, IdRelayF1);
  EEPROM.commit();
  EEPROM.writeString(165, IdRelayF2);
  EEPROM.commit();
  EEPROM.writeString(170, IdRelayF3);
  EEPROM.commit();
  EEPROM.writeString(175, IdRelayF4);
  EEPROM.commit();
  EEPROM.writeString(180, IdRelayF5);
  EEPROM.commit();
  EEPROM.writeString(185, IdRelayF6);
  EEPROM.commit();

  if (IdRelayE1 == "")IdRelayE1 = "500";
  if (IdRelayE2 == "")IdRelayE2 = "500";
  if (IdRelayE3 == "")IdRelayE3 = "500";
  if (IdRelayE4 == "")IdRelayE4 = "500";
  if (IdRelayE5 == "")IdRelayE5 = "500";
  if (IdRelayE6 == "")IdRelayE6 = "500";
  EEPROM.writeString(190, IdRelayE1);
  EEPROM.commit();
  EEPROM.writeString(195, IdRelayE2);
  EEPROM.commit();
  EEPROM.writeString(200, IdRelayE3);
  EEPROM.commit();
  EEPROM.writeString(205, IdRelayE4);
  EEPROM.commit();
  EEPROM.writeString(210, IdRelayE5);
  EEPROM.commit();
  EEPROM.writeString(215, IdRelayE6);
  EEPROM.commit();

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
