void Clear(){
  delay(500);
  lcd.clear();
}

void printMode(int D) {
  lcd.setCursor(0, 0);
  lcd.print("Hold D0 to AP");
  lcd.setCursor(7, 1);
  if (D == 10) {
    lcd.print(String(D));
  }
  else {
    lcd.print("0" + String(D));
  }
  if (D == 1) {
    delay(400);
    lcd.clear();
  }
}

void printAPMode(IPAddress ip){
  lcd.setCursor(0, 0);
  lcd.print("Mode AP config");
  lcd.setCursor(0, 1);
  lcd.print(ip);
}

void printSave(){
  lcd.setCursor(0, 0);
  lcd.print("Save Success!");
  lcd.setCursor(4, 1);
  lcd.print("( 0o0 )");
}

void printBlynk(String S, String ssid){
  lcd.setCursor(0, 0);
  lcd.print(S);
  lcd.setCursor(0, 1);
  lcd.print("="+ssid);
}
