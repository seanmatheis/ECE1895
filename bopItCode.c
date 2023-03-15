#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int click = 10;
const int scroll = A0;
const int shake = A1;
const int start = 8;
int startVal = 0;
bool lose = false;
int rand = 0;
int wait = 500;
int bopState = 0;
bool hit = false;

void setup()
{
  lcd.begin(16,2);
  pinMode(click,INPUT);
  pinMode(scroll,INPUT);
  pinMode(shake,INPUT);
  pinMode(start,INPUT);
  lcd.print("Press Start Button");
}

void loop()
{
  while(startVal != 1){
   startVal = digitalRead(start);
  }
  if (startVal == 1){
    lcd.clear();
    lcd.print("3");
    delay(200);
    lcd.print("2");
    delay(200);
    lcd.print("1");
    delay(200);
    while(lose == false){
      rand = random(1,4);
      switch(rand){
        case 1:
        	clickIt();
        	break;
		case 2:
        	scrollIt();
        	break;
		case 3:
        	shakeIt();
        	break;
      }
    }
  }
}

int clickIt(){
    lcd.print("Click It");
    //speaker says click it.
    bopState = digitalRead(bop);
    while(millis() < millis() + wait){
      if(bopState != digitalRead(bop)){
        //should we play a clicking sound? mouse already clicks
        lcd.print("*click noise*");
        hit = true;
      }
    }
    if(hit == false){
      lose = true;
    }
    return;
}

int scrollIt(){
    lcd.print("Scroll It");
    //speaker says scroll it

    //need to change to work with rotary encoder
    bopState = analogRead(twist);
    while(millis() < millis() + wait){
    //   if(bopState != analogRead(twist)){
    //     //play scroll sound?
    //     lcd.print("*scroll noise*");
    //     hit = true;
    //   }
    }
    if(hit == false){
      lose = true;
    }
    return;
}

int shakeIt(){
    lcd.print("Shake It");
    //speaker says shake it

    //need to change to work with accelerometer
    bopState = analogRead(pull);
    while(millis() < millis() + wait){
    //   if(bopState != analogRead(pull)){
    //     lcd.print("*shake noise*");
    //     hit = true;
    //   }
    }
    if(hit == false){
      lose = true;
    }
    return;
}