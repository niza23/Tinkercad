// C++ code
//
#include <Servo.h>

int i = 0;

int position = 0;

int sensor = 0;

int sensorValue = 0;

int outputValue = 0;

Servo servo_9;

void setup()
{
  pinMode(A0, INPUT);
  servo_9.attach(9, 500, 2500);

}

void loop()
{
  sensorValue = analogRead(A0);
  outputValue = map(sensorValue, 0, 1023, 0, 180);
  servo_9.write(outputValue);
  delay(10); // Delay a little bit to improve simulation performance
}