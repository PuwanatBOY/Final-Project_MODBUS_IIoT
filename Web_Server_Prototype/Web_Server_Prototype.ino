#define BLYNK_PRINT Serial
#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>
#include <WiFiClient.h>
#include <EEPROM.h>
#include <BlynkSimpleEsp32.h>
#include "WebSetup.h"
#define swMode 0
#define ledMode 15

WebServer server(80);

const char* ssidAP = "ESP32-Access-Point";
const char* passAP = "123456789";

const char* authB = "N/A";
const char* ssidB = "N/A";
const char* passB = "N/A";

long buttonTimer = 0;
long longPressTime = 2000;

boolean buttonActive = false;
boolean longPressActive = false;
boolean stateBlynk = false;
boolean stateAP = false;
unsigned long last1, last2;

String header;

IPAddress local_IP(192, 168, 1, 11);
IPAddress gateway(192, 168, 1, 9);
IPAddress subnet(255, 255, 0, 0);


void handleRoot () {
  server.send ( 200, "text/html", index_html );
}

String tok, sid, pass;

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

int i, count = 0, sts = 0;
void setup() {
  Serial.begin(9600);
  EEPROM.begin(128);
  pinMode(swMode, INPUT);
  Serial.println("Strat Mode");
  for (i = 1; i <= 10; i++) {
    if (digitalRead(swMode) == 0) {
      if (buttonActive == false) {
        buttonActive = true;
        buttonTimer = millis();
      }
      if ((millis() - buttonTimer > longPressTime) && (longPressActive == false)) {
        longPressActive = true;
        stateAP = true;
        stateBlynk = true;
        break;
      }
    }
    Serial.print("Please Hold button Boot For AP Config Within 10 seconds there are ");
    Serial.print(11 - i);
    Serial.println(" remaining");
    delay(1000);
    count++;
  }
  //========================================================================================
  if (count < 10 && stateAP == true) {
    SetupAP();
    sts = 1;
    xTaskCreate(&Mode1_Task, "Mode1_Task", 2048, NULL, 10, NULL);
  }
  if (count >=  10 && stateBlynk == false) {
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
    sts = 0;
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
    xTaskCreate(&Mode2_Task, "Mode2_Task", 2048, NULL, 10, NULL);
  }
}

void loop() {
  if (sts == 1)
    server.handleClient();
  if (sts == 0)
    Blynk.run();
}
