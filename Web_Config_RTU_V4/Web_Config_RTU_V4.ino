#define BLYNK_PRINT Serial
#include <ModbusMaster.h>
#include <Arduino.h>
#include <WiFi.h>
#include <LiquidCrystal_I2C.h>
#include <WebServer.h>
#include <WiFiClient.h>
#include <EEPROM.h>
#include <BlynkSimpleEsp32.h>
#include "WebSetup.h"

#define swMode 0
#define ledMode 15

#define MAX485_Monitor 2
#define MAX485_Ctrl 5 // Pin Ctrl 1=Tx and 0=Rx_NEG
#define MAX485_Rx 16 // Pin RXD2 16
#define MAX485_Tx 17 // Pin TXD2 17
ModbusMaster node1; // instantiate ModbusMaster object
ModbusMaster node2; // instantiate ModbusMaster object
ModbusMaster node8; // instantiate ModbusMaster object

WebServer server(80);
IPAddress stationIP   = IPAddress(192, 168, 2, 123);
IPAddress gatewayIP   = IPAddress(192, 168, 2, 1);
IPAddress netMask     = IPAddress(255, 255, 255, 0);
IPAddress dns1IP      = gatewayIP;
IPAddress dns2IP      = IPAddress(8, 8, 8, 8);

BlynkTimer timer;
WidgetLED led1(V20);
WidgetLED led2(V21);
WidgetLED led3(V22);
WidgetLED led4(V23);

LiquidCrystal_I2C lcd(0x27, 16, 2);

const char* ssidAP = "ESP32-Access-Point-RTU";
const char* passAP = "123456789";

const char* authB = "N/A";
const char* ssidB = "N/A";
const char* passB = "N/A";
const char* serveB = "N/A";
int portB = 0;

long buttonTimer = 0;
long longPressTime = 2000;

boolean buttonActive = false;
boolean longPressActive = false;
boolean stateBlynk = false;
boolean stateAP = false;
boolean btnState = false;
unsigned long previousMillis;

String header;

String tok, serv, pot, sid, pass;
int i, count = 0, sts = 0, ststemp = 0;
int xx = 0, ww = 0, yy = 0, zz = 0;
int count4r = 0, count8r = 0;
float temp = 12.34, humi = 56.78;

void setup() {
  Serial.begin(115200);
  EEPROM.begin(128);
  pinMode(swMode, INPUT);
  lcd.init();
  lcd.backlight();
  setup_0();
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
        Clear();
        break;
      }
    }
    Serial.print("Please Hold button D0 For AP Config there are ");
    Serial.println(11 - i);
    printMode(11 - i);
    delay(1000);
    count++;
  }
  //========================================================================================
  if (count < 10 && stateAP == true) {
    SetupAP();
    xTaskCreate(&Mode1_Task, "Mode1_Task", 2048, NULL, 10, NULL);
    sts = 1;
  }
  if (count >=  10 && stateBlynk == false) {
    serv = EEPROM.readString(40);
    pot = EEPROM.readString(70);
    sid = EEPROM.readString(80);
    printBlynk("Mode Blynk", sid);
    if (serv != "" and pot != "")startBlynkServer();
    if (serv == "" and pot == "")startBlynk();
    Clear();
    printBlynk("Mode Blynk Ready", sid);
    xTaskCreate(&Mode2_Task, "Mode2_Task", 2048, NULL, 10, NULL);
    sts = 0;
  }
}

void loop() {
  if (sts == 1)
    server.handleClient();
  if (sts == 0) {
    Blynk.run();
    timer.run();
    if(ststemp == 0){
      myTimeEvent2();
      ststemp = 1;
    }
  }
}
