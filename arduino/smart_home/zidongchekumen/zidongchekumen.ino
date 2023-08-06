#include <Servo.h>

Servo servo_11;

void setup() 
{
  pinMode(7, INPUT);
  servo_11.attach(11) ;
}

void loop() 
{
  if (digitalRead(7)==0)
  {
    servo_11.write(90);
    delay(5000);
  }
  else
  {
    servo_11.write(0);
    delay(1000);    
  }
}
