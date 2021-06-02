// C++ code
//
#include<Servo.h>

Servo servo;
Servo servo2;

void setup()
{
  servo.attach(9);
  servo2.attach(7);
}

void loop()
{
  int analog_val = analogRead(A0);
  int motor = map(analog_val, 0, 1023, 0, 120);
  servo.write(motor);
  servo2.write(motor);
  delay(15);
}
