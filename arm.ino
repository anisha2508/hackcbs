#include <Servo.h>

Servo myservo2;

Servo myservo3;

Servo myservo4;
Servo myservo5;



int potpin = 0;
int potpin2 = 1;

int potpin3 = 2;
int potpin4 = 3;

int val = 0;
int val2 = 0;

int val3 = 0;
int val4 = 0;

void setup()
{

myservo2.attach(2);
myservo3.attach(3);

myservo4.attach(4);
  myservo5.attach(5);

}

void loop()
{

val = analogRead(potpin);
val = map(val, 3, 1023, 0, 176);

myservo2.write(val);

delay(25);

val2 = analogRead(potpin2);
val2 = map(val2, 3, 1023, 0, 176);

myservo3.write(val2);

delay(25);

val3 = analogRead(potpin3);
val3 = map(val3, 3, 1023, 0, 175);

myservo4.write(val3);

delay(25);
  val4 = analogRead(potpin4);
val4 = map(val4, 3, 1023, 0, 175);

myservo5.write(val4);

delay(25);

}