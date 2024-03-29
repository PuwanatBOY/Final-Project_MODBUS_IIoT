void SetupAP() {
  delay(1000);
  Serial.print("Setting AP (Access Point)…");
  WiFi.mode(WIFI_OFF);
  delay(200);
  WiFi.mode(WIFI_AP);
  Serial.println(WiFi.softAP(ssidAP, passAP) ? "Ready !!" : "Failed !");
  delay(200);
  WiFi.softAPConfig(stationIP, gatewayIP, netMask);
  delay(200);
  Serial.print("AP IP address: ");
  Serial.println(WiFi.softAPIP());
  printAPMode(WiFi.softAPIP());
  
  server.on("/", handleShow);
  server.on("/config", handleRoot);
  server.on("/post", handleForm);
  server.onNotFound(handleNotFound);
  server.begin();
  Serial.println("HTTP server started");
}

void handleNotFound()
{
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET) ? "GET" : "POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i = 0; i < server.args(); i++) {
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
}
