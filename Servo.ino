#include <Servo.h>
Servo myServo;

void setup()
{
 myServo.attach(2);
 
}

void loop()
{
  myServo.write(0);
  delay(1000);
  myservo.write(180);
  delay(1000);

}