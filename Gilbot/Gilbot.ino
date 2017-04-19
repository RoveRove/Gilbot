#include <Servo.h> 
Servo myservo;
Servo myservo2;


void setup(){
  Serial.begin(9600);
  
  myservo.attach(3);
  myservo2.attach(7);

  myservo.writeMicroseconds(2000);
  myservo2.writeMicroseconds(1567);
}

void  loop() {
}


