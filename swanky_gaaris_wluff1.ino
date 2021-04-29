# include <Servo.h>
Servo servo1;

int RED = 13;
int BLUE = 12;
int GREEN = 8;
int pinPot = 0;
int value;
long distance;



void setup()
{
  servo1.attach(2);
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  servo1.write(0);
  value = analogRead(pinPot);
 // value = map(value 0, 1023, 0, 180);
  
  if(distance <= 341){
    servo1.write(60);
  digitalWrite(RED, HIGH);
  delay(1000);
  digitalWrite(RED, LOW);
  
  } 
  if(distance<= 682){
 servo1.write(120);
  digitalWrite(BLUE, HIGH);
    delay(1000);
  digitalWrite(BLUE, LOW);
    
  } 
  
  if(distance <= 1023){
    servo1.write(180);
  digitalWrite(GREEN, HIGH);
    delay(1000);
  digitalWrite(GREEN, LOW);
 
  }
  else {servo1.write(0);}
}
  
    
    