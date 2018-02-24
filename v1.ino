const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
char* myStrings[]={"i","thought","this","was","going","in","a","different","direction"};
int x;


void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 1);

}

void loop() {
  
  lcd.setCursor(0, 0);
  //int x = myStrings[random(0,8)];
  lcd.print(myStrings[random(0,8)]);
  delay(500);
  lcd.clear();
}
