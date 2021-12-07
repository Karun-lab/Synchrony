#include <LiquidCrystal.h>;

int encoder1 = A0; // Endoer 1 is connected to Analog Pin A0
int encoder2 = A1; // Endoer 2 is connected to Analog Pin A1
int encoder3 = A2; // Endoer 3 is connected to Analog Pin A2

int step1; int step2; int step3; // Values of encoder is stored in these steps
int val1; int val2; int val3;   // Mapped vales from Encoder to stepper motors


int sw1=6;  int sws1;
int sw2=7;  int sws2;
int sw3=8;  int sws3;
int sw4=9;  int sws4;
int sw5=10; int sws5;


int stepPin1 = 14;  // Stepper motor 1 Pull+ is connected to Digital Pin 6 
int dirPin1  = 15;  // Stepper motor 1 Direction Pin is connected to Digital Pin 7 
int stepPin2 = 16;  // Stepper motor 2 Pull+ is connected to Digital Pin 8 
int dirPin2  = 17;  // Stepper motor 2 Direction Pin is connected to Digital Pin 9
int stepPin3 = 18; // Stepper motor 3 Pull+ is connected to Digital Pin 10 
int dirPin3  = 19; // Stepper motor 3 Direction Pin is connected to Digital Pin 11


LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Pins to which the LCDD Display is connected 

void setup(){
  lcd.begin(16, 2);
  pinMode(stepPin1, OUTPUT);
  pinMode(dirPin1,  OUTPUT);
  pinMode(stepPin2, OUTPUT);
  pinMode(dirPin2,  OUTPUT);
  pinMode(stepPin3, OUTPUT);
  pinMode(dirPin3,  OUTPUT);
  sws1= digitalRead(sw1);
  sws2= digitalRead(sw2);
  sws3= digitalRead(sw3);
  sws4= digitalRead(sw4);
  sws5= digitalRead(sw4);
  lcd.setCursor(0,0);
  lcd.print("System Ready");
  
}

void loop(){ 
  step1 = analogRead(encoder1);
  step2 = analogRead(encoder2);
  step3 = analogRead(encoder3);
 
// Switch 5 to STOP all motors
  if(sws5 == HIGH){
    lcd.setCursor(0,0);
    lcd.print("System Stpped");
    digitalWrite(stepPin1 ,LOW);
    digitalWrite(stepPin2 ,LOW);
    digitalWrite(stepPin3 ,LOW); 
  }
  // Switch 1 to run Motor 1
  if(sws1 == HIGH){
    lcd.setCursor(0,0);    // Prints on the 1st line
    lcd.print("P1: "); lcd.print(step1);
    lcd.setCursor(0,1);    // Prints on the 2nd line
    lcd.print("Motor1 running");
    digitalWrite (dirPin1 ,HIGH); // Change to Low if you need the motor to change the direction
    val1 = map(val1, 0, step1, 0, 200);
    for (int x = 0; x<val1; x++){  // 
    digitalWrite(stepPin1 ,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin1 ,LOW);
    delayMicroseconds(2000);
  }
  // Switch 2 to run Motor 2
  if(sws2 == HIGH){
    lcd.setCursor(0,0);
    lcd.print("P2: "); lcd.print(step2);
    lcd.setCursor(0,1);  // Prints on the 2nd line
    lcd.print("Motor3 running");
    digitalWrite (dirPin2 ,HIGH); // Change to Low if you need the motor to change the direction
    val2 = map(val2, 0, step2, 0, 200);
    for (int x = 0; x<val2; x++){  
    digitalWrite(stepPin2 ,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin2 ,LOW);
    delayMicroseconds(2000);
  }
  // Switch 3 to run Motor 3
  if(sws3 == HIGH){
    lcd.setCursor(0,0);   // Prints on the1st line
    lcd.print("P3: "); lcd.print(step3);
    lcd.setCursor(0,1);  // Prints on the 2nd line
    lcd.print("Motor3 running");
    digitalWrite (dirPin3 ,HIGH); // Change to Low if you need the motor to change the direction
    val3 = map(val3, 0, step3, 0, 200);
    for (int x = 0; x<val3; x++){  
    digitalWrite(stepPin3 ,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin3 ,LOW);
    delayMicroseconds(2000);
    }
    // Switch 4 to run All motors
    if(sws4 == HIGH){
    lcd.setCursor(0,0);  // Prints on the1st line
    lcd.print("All Motors running");
    digitalWrite (dirPin3 ,HIGH); // Change to Low if you need the motor to change the direction
    for (int x = 0; 200; x++){  
    digitalWrite(stepPin1 ,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin1 ,LOW);
    delayMicroseconds(2000); 
    digitalWrite(stepPin2 ,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin2 ,LOW);
    delayMicroseconds(2000);
    digitalWrite(stepPin3 ,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin3 ,LOW);
    delayMicroseconds(2000);
    }
   }
  }
 }
}
}
