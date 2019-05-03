#include<Servo.h>                //Adding the Servo library

Servo myservo;            //Define an object named MyServo
const int eko=8;        
const int trig=7;        
int distance;
int duration;

void setup() {
  myservo.attach(9);           //We introduced the ninth pin arduino to the servo motor
  pinMode(trig,OUTPUT);        
  pinMode(eko,INPUT);          
}

void loop() {
  myservo.write(0);       
  Serial.begin(9600);     
  
 
   
  digitalWrite(trig, LOW);         
  delayMicroseconds(10);
  digitalWrite(trig, HIGH);       
  delayMicroseconds(20);
  digitalWrite(trig, LOW);
  duration = pulseIn(eko, HIGH);      
  distance= (duration/29.1)/2;  
  

  if(distance<=5){
    myservo.write(70);
    delay(5000);   
  }
  
   
  if(distance>200)
distance=200;
Serial.print("distance");
Serial.println(distance);
delay(500);
}
