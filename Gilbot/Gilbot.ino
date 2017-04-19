#include <Servo.h> 
Servo myservo;
Servo myservo2;


void setup(){
  Serial.begin(9600);
  
  myservo.attach(3);
  myservo2.attach(12);

  myservo.writeMicroseconds(1597);
  myservo2.writeMicroseconds(2000);
}

void  loop() {
}


