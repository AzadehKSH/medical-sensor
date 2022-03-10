#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
//***********************************************************************
int pinButton = 13;
int pinButton1 = 2;
int pinButton2 = 3;
int pinButton3 = 4;
int pinButton4 = 5;
int pinButton5 = 6;
int pinButton6 = 7;
int potPin = A2; //potenyiometer key pin
int x;//potenyiometer key pin
int value;//potenyiometer key pin
int sensorpin = A1; //sensor pin
int y = 0; //sensor pin
float sensor;
int Relay = 8;
int Relay1 = 9;
int Relay2 = 10;
int Relay3 = 11;
int Relay4 = 12;
int stateRelay = LOW;
int stateRelay1 = LOW;
int stateRelay2 = LOW;
int stateRelay3 = LOW;
int stateRelay4 = LOW;
int stateButton = 0;
int stateButton1 = 0;
int stateButton2 = 0;
int stateButton3 = 0;
int stateButton4 = 0;
int stateButton5 = 0;
int stateButton6;
int previous = LOW;
int previous1 = LOW;
int previous2 = LOW;
int previous3 = LOW;
int previous4 = LOW;
int previous5 = LOW;
int previous6 = LOW;
long time = 0;
long debounce = 500;
int stayON = 50; //stay on for 5000 ms
int i = 0;
int num_RELAY = 1000;
//**************************************************************************************************SETUP
void setup() {
  lcd.begin();
//  lcd.init();
  
  lcd.setCursor(0, 1);

  lcd.backlight();
  
}
void loop() {
  //**************************************************************************************************potentio key
  value = analogRead(potPin);
  value = map(value, 0, 1023, 0, 22); //Map value 0-1023 to 0-255 (PWM)

  if (value == 0) {
    x = 20;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("2");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print(" ");
  }
  if (value == 1) {
    x = 30;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("3");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print(" ");
  }
  if (value == 2) {
    x = 40;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("4");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print(" ");
  }
  if (value == 3) {
    x = 50;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("5");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 4) {
    x = 60;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("6");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 5) {
    x = 70;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("7");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 6) {
    x = 80;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("8");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 7) {
    x = 90;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("9");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 8) {
    x = 100;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("1");
    lcd.print("0");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 9) {
    x = 110;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("1");
    lcd.print("1");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 10) {
    x = 120;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("1");
    lcd.print("2");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 11) {
    x = 130;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("1");
    lcd.print("3");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 12) {
    x = 140;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("1");
    lcd.print("4");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 13) {
    x = 150;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("1");
    lcd.print("5");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 14) {
    x = 160;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("1");
    lcd.print("6");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 15) {
    x = 170;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("1");
    lcd.print("7");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 16) {
    x = 180;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("1");
    lcd.print("8");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 17) {
    x = 190;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("1");
    lcd.print("9");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 18) {
    x = 200;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("2");
    lcd.print("0");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 19) {
    x = 210;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("2");
    lcd.print("1");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 20) {
    x = 220;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("2");
    lcd.print("2");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 21) {
    x = 230;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("2");
    lcd.print("3");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  if (value == 22) {
    x = 240;
    lcd.setCursor(3, 0);
    lcd.print("P");
    lcd.print(":");
    lcd.print("2");
    lcd.print("4");
    lcd.print("0");
    lcd.print("m");
    lcd.print("m");
    lcd.print("H");
    lcd.print("g");
    lcd.print("  ");
  }
  
  //************************************************************************************************* SENSOR
  sensor = analogRead(sensorpin);
  sensor = (sensor - 41.0);
  if (sensor == 23) y = 10;
  if (sensor == 33) y = 15;
  if (sensor == 44) y = 20;
  if (sensor == 57) y = 25;
  if (sensor == 71) y = 30;
  if (sensor == 83) y = 35;
  if (sensor == 94) y = 40;
  if (sensor == 106) y = 45;
  if (sensor == 119) y = 50;
  if (sensor == 131) y = 55;
  if (sensor == 144) y = 60;
  if (sensor == 156) y = 65;
  if (sensor == 169) y = 70;
  if (sensor == 181) y = 75;
  if (sensor == 194) y = 80;
  if (sensor == 206) y = 85;
  if (sensor == 218) y = 90;
  if (sensor == 229) y = 95;
  if (sensor == 240) y = 100;
  if (sensor == 254) y = 105;
  if (sensor == 268) y = 110;
  if (sensor == 279) y = 115;
  if (sensor == 290) y = 120;
  if (sensor == 303) y = 125;
  if (sensor == 316) y = 130;
  if (sensor == 329) y = 135;
  if (sensor == 342) y = 140;
  if (sensor == 353) y = 145;
  if (sensor == 365) y = 150;
  if (sensor == 378) y = 155;
  if (sensor == 391) y = 160;
  if (sensor == 403) y = 165;
  if (sensor == 415) y = 170;
  if (sensor == 425) y = 175;
  if (sensor == 436) y = 180;
  if (sensor == 449) y = 185;
  if (sensor == 462) y = 190;
  if (sensor == 475) y = 195;
  if (sensor == 489) y = 200;
  if (sensor == 501) y = 205;
  if (sensor == 513) y = 210;
  if (sensor == 527) y = 215;
  if (sensor == 541) y = 220;
  if (sensor == 550) y = 225;
  if (sensor == 560) y = 230;
  if (sensor == 571) y = 235;
  if (sensor == 582) y = 240;
  if (sensor == 593) y = 245;
 
  //**************************************************************************************************
  pinMode(pinButton, INPUT);
  pinMode(pinButton1, INPUT);
  pinMode(pinButton2, INPUT);
  pinMode(pinButton3, INPUT);
  pinMode(pinButton4, INPUT);
  pinMode(pinButton5, INPUT);
  pinMode(pinButton6, INPUT);
  pinMode(Relay, OUTPUT);
  pinMode(Relay1, OUTPUT);
  pinMode(Relay2, OUTPUT);
  pinMode(Relay3, OUTPUT);
  pinMode(Relay4, OUTPUT);
  digitalWrite(Relay, HIGH);
  delay(0.5);
  digitalWrite(Relay1, HIGH);
  delay(0.5);
  digitalWrite(Relay2, HIGH);
  delay(0.5);
  digitalWrite(Relay3, HIGH);
  delay(0.5);
  digitalWrite(Relay4, HIGH);
  delay(0.5);
  stateButton = digitalRead(pinButton);
  stateButton1 = digitalRead(pinButton1);
  stateButton2 = digitalRead(pinButton2);
  stateButton3 = digitalRead(pinButton3);
  stateButton4 = digitalRead(pinButton4);
  stateButton5 = digitalRead(pinButton5);
  stateButton6 = digitalRead(pinButton6);
  //***************************************************************************************
  if (y <= (x - 5)) {
    //**************************************************************************************************************************HALAT 1*****************************************
    do {
      if (stateButton == HIGH && previous == LOW && millis() - time > debounce) {
        if (stateButton == HIGH) {

          lcd.setCursor(3, 1);
          lcd.print("M");
          lcd.print("o");
          lcd.print("d");
          lcd.print("e");
          lcd.print(":");
          lcd.print("1");
  

          do {
f8:
            sensor = analogRead(sensorpin);
            sensor = (sensor - 41.0);
            if (sensor == 23) y = 10;
            if (sensor == 33) y = 15;
            if (sensor == 44) y = 20;
            if (sensor == 57) y = 25;
            if (sensor == 71) y = 30;
            if (sensor == 83) y = 35;
            if (sensor == 94) y = 40;
            if (sensor == 106) y = 45;
            if (sensor == 119) y = 50;
            if (sensor == 131) y = 55;
            if (sensor == 144) y = 60;
            if (sensor == 156) y = 65;
            if (sensor == 169) y = 70;
            if (sensor == 181) y = 75;
            if (sensor == 194) y = 80;
            if (sensor == 206) y = 85;
            if (sensor == 218) y = 90;
            if (sensor == 229) y = 95;
            if (sensor == 240) y = 100;
            if (sensor == 254) y = 105;
            if (sensor == 268) y = 110;
            if (sensor == 279) y = 115;
            if (sensor == 290) y = 120;
            if (sensor == 303) y = 125;
            if (sensor == 316) y = 130;
            if (sensor == 329) y = 135;
            if (sensor == 342) y = 140;
            if (sensor == 353) y = 145;
            if (sensor == 365) y = 150;
            if (sensor == 378) y = 155;
            if (sensor == 391) y = 160;
            if (sensor == 403) y = 165;
            if (sensor == 415) y = 170;
            if (sensor == 425) y = 175;
            if (sensor == 436) y = 180;
            if (sensor == 449) y = 185;
            if (sensor == 462) y = 190;
            if (sensor == 475) y = 195;
            if (sensor == 489) y = 200;
            if (sensor == 501) y = 205;
            if (sensor == 513) y = 210;
            if (sensor == 527) y = 215;
            if (sensor == 541) y = 220;
            if (sensor == 550) y = 225;
            if (sensor == 560) y = 230;
            if (sensor == 571) y = 235;
            if (sensor == 582) y = 240;
            if (sensor == 593) y = 245;
   
            if (y > x) goto f9;

            if (y < (x - 5))
              digitalWrite(Relay, LOW);
            delay(10);
            digitalWrite(Relay1, LOW);
            delay(10);
            digitalWrite(Relay2, LOW);
            delay(10);
            digitalWrite(Relay3, LOW);
            delay(10);
            digitalWrite(Relay4, LOW);
          } while (y < (x - 5));
f9:  if (y >= x)
            digitalWrite(Relay, HIGH);
          delay(10);
          digitalWrite(Relay1, HIGH);
          delay(10);
          digitalWrite(Relay2, HIGH);
          delay(10);
          digitalWrite(Relay3, HIGH);
          delay(10);
          digitalWrite(Relay4, HIGH);
          delay(5000);
          goto f8;

        }
        time = millis();
      }
    } while (stateButton == HIGH);
    previous == stateButton;
    //************************************************HALAT2**********************************************************************************************
    do {
      if (stateButton1 == HIGH && previous == LOW && millis() - time > debounce) {
        if (stateButton1 == HIGH) {

          lcd.setCursor(3, 1);
          lcd.print("M");
          lcd.print("o");
          lcd.print("d");
          lcd.print("e");
          lcd.print(":");
          lcd.print("2");

e:

          sensor = analogRead(sensorpin);
          sensor = (sensor - 41.0);
          if (sensor == 23) y = 10;
          if (sensor == 33) y = 15;
          if (sensor == 44) y = 20;
          if (sensor == 57) y = 25;
          if (sensor == 71) y = 30;
          if (sensor == 83) y = 35;
          if (sensor == 94) y = 40;
          if (sensor == 106) y = 45;
          if (sensor == 119) y = 50;
          if (sensor == 131) y = 55;
          if (sensor == 144) y = 60;
          if (sensor == 156) y = 65;
          if (sensor == 169) y = 70;
          if (sensor == 181) y = 75;
          if (sensor == 194) y = 80;
          if (sensor == 206) y = 85;
          if (sensor == 218) y = 90;
          if (sensor == 229) y = 95;
          if (sensor == 240) y = 100;
          if (sensor == 254) y = 105;
          if (sensor == 268) y = 110;
          if (sensor == 279) y = 115;
          if (sensor == 290) y = 120;
          if (sensor == 303) y = 125;
          if (sensor == 316) y = 130;
          if (sensor == 329) y = 135;
          if (sensor == 342) y = 140;
          if (sensor == 353) y = 145;
          if (sensor == 365) y = 150;
          if (sensor == 378) y = 155;
          if (sensor == 391) y = 160;
          if (sensor == 403) y = 165;
          if (sensor == 415) y = 170;
          if (sensor == 425) y = 175;
          if (sensor == 436) y = 180;
          if (sensor == 449) y = 185;
          if (sensor == 462) y = 190;
          if (sensor == 475) y = 195;
          if (sensor == 489) y = 200;
          if (sensor == 501) y = 205;
          if (sensor == 513) y = 210;
          if (sensor == 527) y = 215;
          if (sensor == 541) y = 220;
          if (sensor == 550) y = 225;
          if (sensor == 560) y = 230;
          if (sensor == 571) y = 235;
          if (sensor == 582) y = 240;
          if (sensor == 593) y = 245;
          

          if (digitalRead(Relay) == HIGH && y < x) goto t;
          if (digitalRead(Relay4) == LOW && y > x) goto x;
          delay(5);
          if (y > x and digitalRead(Relay2) == LOW) goto d;
          delay(5);
          if ( y > (x - 5) && digitalRead(Relay3) == LOW)  {
            digitalWrite(Relay4, LOW);
          }


t:  do {

            if (y < x) {
              digitalWrite(Relay, LOW);
              digitalWrite(Relay1, LOW);

              goto e;
            } else if (y > x) {
              goto v;
            }
          } while (digitalRead(Relay1) == HIGH);

v:
          digitalWrite(Relay2, LOW);
          goto e;
d:
          digitalWrite(Relay3, LOW);
          delay(100);
          goto e;

x:
          { digitalWrite(Relay, HIGH);
            delay(2000);
            digitalWrite(Relay1, HIGH);
            delay(2000);
            digitalWrite(Relay2, HIGH);
            delay(2000);
            digitalWrite(Relay3, HIGH);
            delay(2000);
            digitalWrite(Relay4, HIGH);




            sensor = analogRead(sensorpin);
            sensor = (sensor - 41.0);
            if (sensor == 23) y = 10;
            if (sensor == 33) y = 15;
            if (sensor == 44) y = 20;
            if (sensor == 57) y = 25;
            if (sensor == 71) y = 30;
            if (sensor == 83) y = 35;
            if (sensor == 94) y = 40;
            if (sensor == 106) y = 45;
            if (sensor == 119) y = 50;
            if (sensor == 131) y = 55;
            if (sensor == 144) y = 60;
            if (sensor == 156) y = 65;
            if (sensor == 169) y = 70;
            if (sensor == 181) y = 75;
            if (sensor == 194) y = 80;
            if (sensor == 206) y = 85;
            if (sensor == 218) y = 90;
            if (sensor == 229) y = 95;
            if (sensor == 240) y = 100;
            if (sensor == 254) y = 105;
            if (sensor == 268) y = 110;
            if (sensor == 279) y = 115;
            if (sensor == 290) y = 120;
            if (sensor == 303) y = 125;
            if (sensor == 316) y = 130;
            if (sensor == 329) y = 135;
            if (sensor == 342) y = 140;
            if (sensor == 353) y = 145;
            if (sensor == 365) y = 150;
            if (sensor == 378) y = 155;
            if (sensor == 391) y = 160;
            if (sensor == 403) y = 165;
            if (sensor == 415) y = 170;
            if (sensor == 425) y = 175;
            if (sensor == 436) y = 180;
            if (sensor == 449) y = 185;
            if (sensor == 462) y = 190;
            if (sensor == 475) y = 195;
            if (sensor == 489) y = 200;
            if (sensor == 501) y = 205;
            if (sensor == 513) y = 210;
            if (sensor == 527) y = 215;
            if (sensor == 541) y = 220;
            if (sensor == 550) y = 225;
            if (sensor == 560) y = 230;
            if (sensor == 571) y = 235;
            if (sensor == 582) y = 240;
            if (sensor == 593) y = 245;
         
            delay(5000);
            goto e;
          }
        }


        time = millis();
      }
    }
    while (stateButton1 == HIGH );

    previous1 == stateButton1;

    //*******************************************************HALAT3********************************************************************************
    do {
      if (stateButton2 == HIGH && previous == LOW && millis() - time > debounce) {
        if (stateButton2 == HIGH) {

          lcd.setCursor(3, 1);
          lcd.print("M");
          lcd.print("o");
          lcd.print("d");
          lcd.print("e");
          lcd.print(":");
          lcd.print("3");
          delay(10);

z:
          
          sensor = analogRead(sensorpin);
          sensor = (sensor - 41.0);
          if (sensor == 23) y = 10;
          if (sensor == 33) y = 15;
          if (sensor == 44) y = 20;
          if (sensor == 57) y = 25;
          if (sensor == 71) y = 30;
          if (sensor == 83) y = 35;
          if (sensor == 94) y = 40;
          if (sensor == 106) y = 45;
          if (sensor == 119) y = 50;
          if (sensor == 131) y = 55;
          if (sensor == 144) y = 60;
          if (sensor == 156) y = 65;
          if (sensor == 169) y = 70;
          if (sensor == 181) y = 75;
          if (sensor == 194) y = 80;
          if (sensor == 206) y = 85;
          if (sensor == 218) y = 90;
          if (sensor == 229) y = 95;
          if (sensor == 240) y = 100;
          if (sensor == 254) y = 105;
          if (sensor == 268) y = 110;
          if (sensor == 279) y = 115;
          if (sensor == 290) y = 120;
          if (sensor == 303) y = 125;
          if (sensor == 316) y = 130;
          if (sensor == 329) y = 135;
          if (sensor == 342) y = 140;
          if (sensor == 353) y = 145;
          if (sensor == 365) y = 150;
          if (sensor == 378) y = 155;
          if (sensor == 391) y = 160;
          if (sensor == 403) y = 165;
          if (sensor == 415) y = 170;
          if (sensor == 425) y = 175;
          if (sensor == 436) y = 180;
          if (sensor == 449) y = 185;
          if (sensor == 462) y = 190;
          if (sensor == 475) y = 195;
          if (sensor == 489) y = 200;
          if (sensor == 501) y = 205;
          if (sensor == 513) y = 210;
          if (sensor == 527) y = 215;
          if (sensor == 541) y = 220;
          if (sensor == 550) y = 225;
          if (sensor == 560) y = 230;
          if (sensor == 571) y = 235;
          if (sensor == 582) y = 240;
          if (sensor == 593) y = 245;

         
          if (y > (x - 5) && digitalRead(Relay1) == LOW) goto step1 ;


          if ((x - 5) > y > 0 ) {
            digitalWrite(Relay, LOW);
            digitalWrite(Relay1, LOW);
           
            goto z;
          }


step1:
k3:
          
          sensor = analogRead(sensorpin);
          sensor = (sensor - 41.0);
          if (sensor == 23) y = 10;
          if (sensor == 33) y = 15;
          if (sensor == 44) y = 20;
          if (sensor == 57) y = 25;
          if (sensor == 71) y = 30;
          if (sensor == 83) y = 35;
          if (sensor == 94) y = 40;
          if (sensor == 106) y = 45;
          if (sensor == 119) y = 50;
          if (sensor == 131) y = 55;
          if (sensor == 144) y = 60;
          if (sensor == 156) y = 65;
          if (sensor == 169) y = 70;
          if (sensor == 181) y = 75;
          if (sensor == 194) y = 80;
          if (sensor == 206) y = 85;
          if (sensor == 218) y = 90;
          if (sensor == 229) y = 95;
          if (sensor == 240) y = 100;
          if (sensor == 254) y = 105;
          if (sensor == 268) y = 110;
          if (sensor == 279) y = 115;
          if (sensor == 290) y = 120;
          if (sensor == 303) y = 125;
          if (sensor == 316) y = 130;
          if (sensor == 329) y = 135;
          if (sensor == 342) y = 140;
          if (sensor == 353) y = 145;
          if (sensor == 365) y = 150;
          if (sensor == 378) y = 155;
          if (sensor == 391) y = 160;
          if (sensor == 403) y = 165;
          if (sensor == 415) y = 170;
          if (sensor == 425) y = 175;
          if (sensor == 436) y = 180;
          if (sensor == 449) y = 185;
          if (sensor == 462) y = 190;
          if (sensor == 475) y = 195;
          if (sensor == 489) y = 200;
          if (sensor == 501) y = 205;
          if (sensor == 513) y = 210;
          if (sensor == 527) y = 215;
          if (sensor == 541) y = 220;
          if (sensor == 550) y = 225;
          if (sensor == 560) y = 230;
          if (sensor == 571) y = 235;
          if (sensor == 582) y = 240;
          if (sensor == 593) y = 245;

      
          if (y > x && digitalRead(Relay2) == LOW) goto k;

          digitalWrite(Relay1, HIGH);
          digitalWrite(Relay2, LOW);

          goto k3;

k:
          sensor = analogRead(sensorpin);
          sensor = (sensor - 41.0);
          if (sensor == 23) y = 10;
          if (sensor == 33) y = 15;
          if (sensor == 44) y = 20;
          if (sensor == 57) y = 25;
          if (sensor == 71) y = 30;
          if (sensor == 83) y = 35;
          if (sensor == 94) y = 40;
          if (sensor == 106) y = 45;
          if (sensor == 119) y = 50;
          if (sensor == 131) y = 55;
          if (sensor == 144) y = 60;
          if (sensor == 156) y = 65;
          if (sensor == 169) y = 70;
          if (sensor == 181) y = 75;
          if (sensor == 194) y = 80;
          if (sensor == 206) y = 85;
          if (sensor == 218) y = 90;
          if (sensor == 229) y = 95;
          if (sensor == 240) y = 100;
          if (sensor == 254) y = 105;
          if (sensor == 268) y = 110;
          if (sensor == 279) y = 115;
          if (sensor == 290) y = 120;
          if (sensor == 303) y = 125;
          if (sensor == 316) y = 130;
          if (sensor == 329) y = 135;
          if (sensor == 342) y = 140;
          if (sensor == 353) y = 145;
          if (sensor == 365) y = 150;
          if (sensor == 378) y = 155;
          if (sensor == 391) y = 160;
          if (sensor == 403) y = 165;
          if (sensor == 415) y = 170;
          if (sensor == 425) y = 175;
          if (sensor == 436) y = 180;
          if (sensor == 449) y = 185;
          if (sensor == 462) y = 190;
          if (sensor == 475) y = 195;
          if (sensor == 489) y = 200;
          if (sensor == 501) y = 205;
          if (sensor == 513) y = 210;
          if (sensor == 527) y = 215;
          if (sensor == 541) y = 220;
          if (sensor == 550) y = 225;
          if (sensor == 560) y = 230;
          if (sensor == 571) y = 235;
          if (sensor == 582) y = 240;
          if (sensor == 593) y = 245;

     
          if (y == x && digitalRead(Relay3) == LOW) goto k1;
          
m: if (y == x - 5) goto step2 ;

step2:
          digitalWrite(Relay2, HIGH);
          digitalWrite(Relay3, LOW);
          goto k;



k1:
        
          sensor = analogRead(sensorpin);
          sensor = (sensor - 41.0);
          delay(10);
          if (sensor == 23) y = 10;
          if (sensor == 33) y = 15;
          if (sensor == 44) y = 20;
          if (sensor == 57) y = 25;
          if (sensor == 71) y = 30;
          if (sensor == 83) y = 35;
          if (sensor == 94) y = 40;
          if (sensor == 106) y = 45;
          if (sensor == 119) y = 50;
          if (sensor == 131) y = 55;
          if (sensor == 144) y = 60;
          if (sensor == 156) y = 65;
          if (sensor == 169) y = 70;
          if (sensor == 181) y = 75;
          if (sensor == 194) y = 80;
          if (sensor == 206) y = 85;
          if (sensor == 218) y = 90;
          if (sensor == 229) y = 95;
          if (sensor == 240) y = 100;
          if (sensor == 254) y = 105;
          if (sensor == 268) y = 110;
          if (sensor == 279) y = 115;
          if (sensor == 290) y = 120;
          if (sensor == 303) y = 125;
          if (sensor == 316) y = 130;
          if (sensor == 329) y = 135;
          if (sensor == 342) y = 140;
          if (sensor == 353) y = 145;
          if (sensor == 365) y = 150;
          if (sensor == 378) y = 155;
          if (sensor == 391) y = 160;
          if (sensor == 403) y = 165;
          if (sensor == 415) y = 170;
          if (sensor == 425) y = 175;
          if (sensor == 436) y = 180;
          if (sensor == 449) y = 185;
          if (sensor == 462) y = 190;
          if (sensor == 475) y = 195;
          if (sensor == 489) y = 200;
          if (sensor == 501) y = 205;
          if (sensor == 513) y = 210;
          if (sensor == 527) y = 215;
          if (sensor == 541) y = 220;
          if (sensor == 550) y = 225;
          if (sensor == 560) y = 230;
          if (sensor == 571) y = 235;
          if (sensor == 582) y = 240;
          if (sensor == 593) y = 245;

        
          if (y == x + 10  && digitalRead(Relay4) == LOW) goto k2;
          
m1: if (y > x) goto step3 ;

step3:
          digitalWrite(Relay3, HIGH);
          digitalWrite(Relay4, LOW);
          goto k1;



k2:
          sensor = analogRead(sensorpin);
          sensor = (sensor - 41.0);
          if (sensor == 23) y = 10;
          if (sensor == 33) y = 15;
          if (sensor == 44) y = 20;
          if (sensor == 57) y = 25;
          if (sensor == 71) y = 30;
          if (sensor == 83) y = 35;
          if (sensor == 94) y = 40;
          if (sensor == 106) y = 45;
          if (sensor == 119) y = 50;
          if (sensor == 131) y = 55;
          if (sensor == 144) y = 60;
          if (sensor == 156) y = 65;
          if (sensor == 169) y = 70;
          if (sensor == 181) y = 75;
          if (sensor == 194) y = 80;
          if (sensor == 206) y = 85;
          if (sensor == 218) y = 90;
          if (sensor == 229) y = 95;
          if (sensor == 240) y = 100;
          if (sensor == 254) y = 105;
          if (sensor == 268) y = 110;
          if (sensor == 279) y = 115;
          if (sensor == 290) y = 120;
          if (sensor == 303) y = 125;
          if (sensor == 316) y = 130;
          if (sensor == 329) y = 135;
          if (sensor == 342) y = 140;
          if (sensor == 353) y = 145;
          if (sensor == 365) y = 150;
          if (sensor == 378) y = 155;
          if (sensor == 391) y = 160;
          if (sensor == 403) y = 165;
          if (sensor == 415) y = 170;
          if (sensor == 425) y = 175;
          if (sensor == 436) y = 180;
          if (sensor == 449) y = 185;
          if (sensor == 462) y = 190;
          if (sensor == 475) y = 195;
          if (sensor == 489) y = 200;
          if (sensor == 501) y = 205;
          if (sensor == 513) y = 210;
          if (sensor == 527) y = 215;
          if (sensor == 541) y = 220;
          if (sensor == 550) y = 225;
          if (sensor == 560) y = 230;
          if (sensor == 571) y = 235;
          if (sensor == 582) y = 240;
          if (sensor == 593) y = 245;

m2: if (y > x) goto step4;

step4:
          digitalWrite(Relay, HIGH);
          digitalWrite(Relay1, HIGH);
          digitalWrite(Relay2, HIGH);
          digitalWrite(Relay3, HIGH);
          digitalWrite(Relay4, HIGH);

          delay(6000);
          sensor = analogRead(sensorpin);
          sensor = (sensor - 41.0);
          goto z;

        }


        time = millis();
      }
    }
    while (stateButton2 == HIGH);

    previous2 == stateButton2;
    //*****************************************************DASTY1*****************************************************************
    do {
      if (stateButton3 == HIGH && previous == LOW && millis() - time > debounce) {
        if (stateButton3 == HIGH) {


          lcd.setCursor(3, 1);
          lcd.print("S");
          lcd.print("e");
          lcd.print("g");
          lcd.print("m");
          lcd.print("n");
          lcd.print("t");
          lcd.print(":");
          lcd.print("1");
          

          do {
f:
            sensor = analogRead(sensorpin);
            sensor = (sensor - 41.0);
            if (sensor == 23) y = 10;
            if (sensor == 33) y = 15;
            if (sensor == 44) y = 20;
            if (sensor == 57) y = 25;
            if (sensor == 71) y = 30;
            if (sensor == 83) y = 35;
            if (sensor == 94) y = 40;
            if (sensor == 106) y = 45;
            if (sensor == 119) y = 50;
            if (sensor == 131) y = 55;
            if (sensor == 144) y = 60;
            if (sensor == 156) y = 65;
            if (sensor == 169) y = 70;
            if (sensor == 181) y = 75;
            if (sensor == 194) y = 80;
            if (sensor == 206) y = 85;
            if (sensor == 218) y = 90;
            if (sensor == 229) y = 95;
            if (sensor == 240) y = 100;
            if (sensor == 254) y = 105;
            if (sensor == 268) y = 110;
            if (sensor == 279) y = 115;
            if (sensor == 290) y = 120;
            if (sensor == 303) y = 125;
            if (sensor == 316) y = 130;
            if (sensor == 329) y = 135;
            if (sensor == 342) y = 140;
            if (sensor == 353) y = 145;
            if (sensor == 365) y = 150;
            if (sensor == 378) y = 155;
            if (sensor == 391) y = 160;
            if (sensor == 403) y = 165;
            if (sensor == 415) y = 170;
            if (sensor == 425) y = 175;
            if (sensor == 436) y = 180;
            if (sensor == 449) y = 185;
            if (sensor == 462) y = 190;
            if (sensor == 475) y = 195;
            if (sensor == 489) y = 200;
            if (sensor == 501) y = 205;
            if (sensor == 513) y = 210;
            if (sensor == 527) y = 215;
            if (sensor == 541) y = 220;
            if (sensor == 550) y = 225;
            if (sensor == 560) y = 230;
            if (sensor == 571) y = 235;
            if (sensor == 582) y = 240;
            if (sensor == 593) y = 245;

            if (y > (x - 5)) goto f1;
           

            if (y < (x - 5))
              digitalWrite(Relay, LOW);
            delay(10);
            digitalWrite(Relay1, LOW);
            delay(10);

          } while (y < (x - 5));
f1:   if (y > (x - 5))
            digitalWrite(Relay, HIGH);
          delay(10);
          digitalWrite(Relay1, HIGH);
          delay(4000);
          goto f;

        }
        time = millis();
      }
    } while (stateButton3 == HIGH);
    previous3 == stateButton3;
    //**************************************DASTY2*********************************************************************************
    do {
      if (stateButton4 == HIGH && previous == LOW && millis() - time > debounce) {
        if (stateButton4 == HIGH) {



          lcd.setCursor(3, 1);
          lcd.print("S");
          lcd.print("e");
          lcd.print("g");
          lcd.print("m");
          lcd.print("n");
          lcd.print("t");
          lcd.print(":");
          lcd.print("2");
          delay(10);


          do {
f2:
            sensor = analogRead(sensorpin);
            sensor = (sensor - 41.0);
            if (sensor == 23) y = 10;
            if (sensor == 33) y = 15;
            if (sensor == 44) y = 20;
            if (sensor == 57) y = 25;
            if (sensor == 71) y = 30;
            if (sensor == 83) y = 35;
            if (sensor == 94) y = 40;
            if (sensor == 106) y = 45;
            if (sensor == 119) y = 50;
            if (sensor == 131) y = 55;
            if (sensor == 144) y = 60;
            if (sensor == 156) y = 65;
            if (sensor == 169) y = 70;
            if (sensor == 181) y = 75;
            if (sensor == 194) y = 80;
            if (sensor == 206) y = 85;
            if (sensor == 218) y = 90;
            if (sensor == 229) y = 95;
            if (sensor == 240) y = 100;
            if (sensor == 254) y = 105;
            if (sensor == 268) y = 110;
            if (sensor == 279) y = 115;
            if (sensor == 290) y = 120;
            if (sensor == 303) y = 125;
            if (sensor == 316) y = 130;
            if (sensor == 329) y = 135;
            if (sensor == 342) y = 140;
            if (sensor == 353) y = 145;
            if (sensor == 365) y = 150;
            if (sensor == 378) y = 155;
            if (sensor == 391) y = 160;
            if (sensor == 403) y = 165;
            if (sensor == 415) y = 170;
            if (sensor == 425) y = 175;
            if (sensor == 436) y = 180;
            if (sensor == 449) y = 185;
            if (sensor == 462) y = 190;
            if (sensor == 475) y = 195;
            if (sensor == 489) y = 200;
            if (sensor == 501) y = 205;
            if (sensor == 513) y = 210;
            if (sensor == 527) y = 215;
            if (sensor == 541) y = 220;
            if (sensor == 550) y = 225;
            if (sensor == 560) y = 230;
            if (sensor == 571) y = 235;
            if (sensor == 582) y = 240;
            if (sensor == 593) y = 245;
            if (y > (x - 5))  goto f3;
  

            if (y < x)
              digitalWrite(Relay, LOW);
            delay(10);
            digitalWrite(Relay2, LOW);
            delay(10);

          } while (y < x);
f3:  if (y >= x)
            digitalWrite(Relay, HIGH);
          delay(10);
          digitalWrite(Relay2, HIGH);
          delay(4000);
          goto f2;

        }
        time = millis();
      }
    } while (stateButton4 == HIGH);
    previous4 == stateButton4;
    //****************************************************DASTY3***************************************************************************
    do {
      if (stateButton5 == HIGH && previous == LOW && millis() - time > debounce) {
        if (stateButton5 == HIGH) {


          lcd.setCursor(3, 1);
          lcd.print("S");
          lcd.print("e");
          lcd.print("g");
          lcd.print("m");
          lcd.print("n");
          lcd.print("t");
          lcd.print(":");
          lcd.print("3");
          delay(10);



          do {
f4:
            sensor = analogRead(sensorpin);
            sensor = (sensor - 41.0);
            if (sensor == 23) y = 10;
            if (sensor == 33) y = 15;
            if (sensor == 44) y = 20;
            if (sensor == 57) y = 25;
            if (sensor == 71) y = 30;
            if (sensor == 83) y = 35;
            if (sensor == 94) y = 40;
            if (sensor == 106) y = 45;
            if (sensor == 119) y = 50;
            if (sensor == 131) y = 55;
            if (sensor == 144) y = 60;
            if (sensor == 156) y = 65;
            if (sensor == 169) y = 70;
            if (sensor == 181) y = 75;
            if (sensor == 194) y = 80;
            if (sensor == 206) y = 85;
            if (sensor == 218) y = 90;
            if (sensor == 229) y = 95;
            if (sensor == 240) y = 100;
            if (sensor == 254) y = 105;
            if (sensor == 268) y = 110;
            if (sensor == 279) y = 115;
            if (sensor == 290) y = 120;
            if (sensor == 303) y = 125;
            if (sensor == 316) y = 130;
            if (sensor == 329) y = 135;
            if (sensor == 342) y = 140;
            if (sensor == 353) y = 145;
            if (sensor == 365) y = 150;
            if (sensor == 378) y = 155;
            if (sensor == 391) y = 160;
            if (sensor == 403) y = 165;
            if (sensor == 415) y = 170;
            if (sensor == 425) y = 175;
            if (sensor == 436) y = 180;
            if (sensor == 449) y = 185;
            if (sensor == 462) y = 190;
            if (sensor == 475) y = 195;
            if (sensor == 489) y = 200;
            if (sensor == 501) y = 205;
            if (sensor == 513) y = 210;
            if (sensor == 527) y = 215;
            if (sensor == 541) y = 220;
            if (sensor == 550) y = 225;
            if (sensor == 560) y = 230;
            if (sensor == 571) y = 235;
            if (sensor == 582) y = 240;
            if (sensor == 593) y = 245;
            if (y > (x - 5)) goto f5;

           
            if (y < (x - 5))
              digitalWrite(Relay, LOW);
            delay(10);
            digitalWrite(Relay3, LOW);
            delay(10);

          } while (y < (x - 5));
f5:  if (y > (x - 5))
            digitalWrite(Relay, HIGH);
          delay(10);
          digitalWrite(Relay3, HIGH);
          delay(4000);
          goto f4;

        }
        time = millis();
      }
    } while (stateButton5 == HIGH);
    previous5 == stateButton5;
    //***************************************************DASTY4*********************************************************
    do {
      if (stateButton6 == HIGH && previous == LOW && millis() - time > debounce) {
        if (stateButton6 == HIGH) {

          lcd.setCursor(3, 1);
          lcd.print("S");
          lcd.print("e");
          lcd.print("g");
          lcd.print("m");
          lcd.print("n");
          lcd.print("t");
          lcd.print(":");
          lcd.print("4");
          




          do {
f6:
            sensor = analogRead(sensorpin);
            sensor = (sensor - 41.0);
            if (sensor == 23) y = 10;
            if (sensor == 33) y = 15;
            if (sensor == 44) y = 20;
            if (sensor == 57) y = 25;
            if (sensor == 71) y = 30;
            if (sensor == 83) y = 35;
            if (sensor == 94) y = 40;
            if (sensor == 106) y = 45;
            if (sensor == 119) y = 50;
            if (sensor == 131) y = 55;
            if (sensor == 144) y = 60;
            if (sensor == 156) y = 65;
            if (sensor == 169) y = 70;
            if (sensor == 181) y = 75;
            if (sensor == 194) y = 80;
            if (sensor == 206) y = 85;
            if (sensor == 218) y = 90;
            if (sensor == 229) y = 95;
            if (sensor == 240) y = 100;
            if (sensor == 254) y = 105;
            if (sensor == 268) y = 110;
            if (sensor == 279) y = 115;
            if (sensor == 290) y = 120;
            if (sensor == 303) y = 125;
            if (sensor == 316) y = 130;
            if (sensor == 329) y = 135;
            if (sensor == 342) y = 140;
            if (sensor == 353) y = 145;
            if (sensor == 365) y = 150;
            if (sensor == 378) y = 155;
            if (sensor == 391) y = 160;
            if (sensor == 403) y = 165;
            if (sensor == 415) y = 170;
            if (sensor == 425) y = 175;
            if (sensor == 436) y = 180;
            if (sensor == 449) y = 185;
            if (sensor == 462) y = 190;
            if (sensor == 475) y = 195;
            if (sensor == 489) y = 200;
            if (sensor == 501) y = 205;
            if (sensor == 513) y = 210;
            if (sensor == 527) y = 215;
            if (sensor == 541) y = 220;
            if (sensor == 550) y = 225;
            if (sensor == 560) y = 230;
            if (sensor == 571) y = 235;
            if (sensor == 582) y = 240;
            if (sensor == 593) y = 245;

            if (y > (x - 5)) goto f7;
        

            if (y < (x - 5))
              digitalWrite(Relay, LOW);
            delay(10);
            digitalWrite(Relay4, LOW);
            delay(10);

          } while (y < (x - 5));
f7:  if (y > (x - 5))
            digitalWrite(Relay, HIGH);
          delay(10);
          digitalWrite(Relay4, HIGH);
          delay(4000);
          goto f6;

        }
        time = millis();
      }
    } while (stateButton6 == HIGH);
    previous6 == stateButton6;

  }
  else if (y > x) {
   /* digitalWrite(pinButton, HIGH);
    digitalWrite(pinButton1, HIGH);
    digitalWrite(pinButton2, HIGH);
    digitalWrite(pinButton3, HIGH);
    digitalWrite(pinButton4, HIGH);
    digitalWrite(pinButton5, HIGH);
    delay(100);*/
  }

}
