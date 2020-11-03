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


ModbusMaster node11; // instantiate ModbusMaster object Sensor
ModbusMaster node12;
ModbusMaster node13;
ModbusMaster node14;
ModbusMaster node15;
ModbusMaster node16;

ModbusMaster node21; // instantiate ModbusMaster object Relay4
ModbusMaster node22;
ModbusMaster node23;
ModbusMaster node24;
ModbusMaster node25;
ModbusMaster node26;

ModbusMaster node31; // instantiate ModbusMaster object Relay8
ModbusMaster node32;
ModbusMaster node33;
ModbusMaster node34;
ModbusMaster node35;
ModbusMaster node36;


WebServer server(80);
IPAddress stationIP   = IPAddress(192, 168, 2, 123);
IPAddress gatewayIP   = IPAddress(192, 168, 2, 1);
IPAddress netMask     = IPAddress(255, 255, 255, 0);
IPAddress dns1IP      = gatewayIP;
IPAddress dns2IP      = IPAddress(8, 8, 8, 8);

BlynkTimer timer;

LiquidCrystal_I2C lcd(0x27, 16, 2);


// Virtual Id Device
int idSensor1 = 0, idSensor2 = 0, idSensor3 = 0, idSensor4 = 0, idSensor5 = 0, idSensor6 = 0;
int idRelay41 = 0, idRelay42 = 0, idRelay43 = 0, idRelay44 = 0, idRelay45 = 0, idRelay46 = 0;
int idRelay81 = 0, idRelay82 = 0, idRelay83 = 0, idRelay84 = 0, idRelay85 = 0, idRelay86 = 0;

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

int count4r_1 = 0, count4r_2 = 0, count4r_3 = 0, count4r_4 = 0, count4r_5 = 0, count4r_6 = 0;
int count8r_1 = 0, count8r_2 = 0, count8r_3 = 0, count8r_4 = 0, count8r_5 = 0, count8r_6 = 0;

float temp_1 = 12.34, humi_1 = 56.78;
float temp_2 = 12.34, humi_2 = 56.78;
float temp_3 = 12.34, humi_3 = 56.78;
float temp_4 = 12.34, humi_4 = 56.78;
float temp_5 = 12.34, humi_5 = 56.78;
float temp_6 = 12.34, humi_6 = 56.78;

int relay4_sw1 = 0, relay4_sw2 = 0, relay4_sw3 = 0, relay4_sw4 = 0, relay4_sw5 = 0, relay4_sw6 = 0;
int sensorR_1 = 0, sensorR_2 = 0, sensorR_3 = 0, sensorR_4 = 0, sensorR_5 = 0, sensorR_6 = 0;

void setup() {
  Serial.begin(115200);
  EEPROM.begin(256);
  pinMode(swMode, INPUT_PULLUP);
  lcd.init();
  lcd.backlight();
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
    setup_0();
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
    if (ststemp == 0) {
      ReadSensor();
      ststemp = 1;
    }
  }
}
