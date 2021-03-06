// Author: Jordan Meidinger
// Date: 7/5/2020
// Whole build can be found on my LinkedIn jwmeidinger

// Imports
#include <Servo.h>
#include <LiquidCrystal.h>

//Temp Items
int ThermistorPin1 = 0;
int ThermistorPin2 = 1;
int Vo;
float R1 = 10000;
float logR2, R2, T, Temp, meatTemp, smokerTemp;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;

// LCD Items
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  
int Contrast=150;

// Servo Items
Servo myservo;
int pos = 180;    // variable to store the servo position

//Time 
int count = 0;
int mins  = 0;
int hours = 0;

// Setup pins and settings
void setup() {
myservo.attach(9);  // Attaches the servo on pin 9 to the servo object
analogWrite(6,Contrast); // This tells the LCD the contrast of the screen
lcd.begin(16, 2);
lcd.noAutoscroll();
Serial.begin(9600);
}

// Does the math for the Temps
float getTemp(int thermistorPin){
  Vo = 0;
  Vo = analogRead(thermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  T = T - 273.15;
  T = (T * 9.0)/ 5.0 + 32.0; 
  
  // Printing to the computer console if you don't want to hook up an LCD
  Serial.print("Temperature: "); 
  Serial.print(T-4); 
  Serial.println(" F");
  
  return T-4; // Added due to accuracy being off due to resistors not being exactly right
}

// Used to print to hte LCD Screen
void printLCD(){
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("STemp = ");
  lcd.setCursor(8, 0);
  lcd.print(smokerTemp);
  lcd.setCursor(15, 0);   
  lcd.print("F");
  lcd.setCursor(0, 1);
  lcd.print("Time =");
  lcd.setCursor(7, 1);
  if(hours > 0){
    lcd.print(hours);
    lcd.print(":");
    lcd.print(mins);
    lcd.print("  Hrs");
  }else{
    lcd.print(mins);
    lcd.print("  Mins");
  };
  delay(2500);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("MTemp = ");
  lcd.setCursor(8, 0);
  lcd.print(meatTemp);
  lcd.setCursor(15, 0);   
  lcd.print("F");
}

void currentTime(){
  count = count + 5; // This is 5 seconds as there is two 2.5 delays one in the display and one in the loop
  if (count == 60){
    mins = 1 + mins;
    count = 0;
  };

  if (mins == 60){
  hours = 1 + hours;
  mins = 0;
  };
}

void loop() {
  lcd.begin(16, 2); // This resets the screen helps elimate scrabbled text
  currentTime(); // Sets the times for the Meat
  smokerTemp = getTemp(ThermistorPin1); // Get Internal Temp of Smoker
  meatTemp = getTemp(ThermistorPin2);  // Get Temp of Meat
  

  // Smoker setting we want the temp at 180 for the whole smoke time
  myservo.write(0); // Fully open under 
  if (smokerTemp > 150.0){
    myservo.write(40);
  };

  if (smokerTemp > 160.0){
    myservo.write(70);
  };

  if (smokerTemp > 175.0){
    myservo.write(80);
  };

  if (smokerTemp > 180.0){
    myservo.write(85);
  };

  // Stops the Smoker if you want a time limit
  if (hours = 17){
    myservo.write(95);
    break;
  };
  
  printLCD(); // Display the info on LCD
  delay(2500);
}
