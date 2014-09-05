#include <Servo.h> //server driving helper code
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
int pos = 0; 
int del = 1000;
int down = 0;
int up = 90;

void setup()
{
 myservo1.attach(4); //assign servos to pins
 myservo2.attach(5);
 myservo3.attach(6);
 myservo4.attach(7);
}

void loop() //execution loop
{
alpha();
delay(del);
beta();
delay(del);
delta();
delay(del);
gamma();
delay(del);
omega();
delay(del);
zero();
delay(del);
x1();
delay(del);
x2();
delay(del);
top();
delay(del);
bottom();
delay(del);
}


//ARRANGEMENT FUNCTIONS

void zero() //drop all servos
{
  //Zero out
  myservo1.write(0);
  delay(del);
  myservo2.write(0);
  delay(del);
  myservo3.write(0);
  delay(del);
  myservo4.write(0);
  delay(del);
}

void alpha() //lift servo 1
{
  myservo1.write(90);
  delay(del);
  myservo2.write(0);
  delay(del);
  myservo3.write(0);
  delay(del);
  myservo4.write(0);
  delay(del);
}

void beta() //lift servo 2
{
  myservo1.write(0);
  delay(del);
  myservo2.write(90);
  delay(del);
  myservo3.write(0);
  delay(del);
  myservo4.write(0);
  delay(del);
}

void delta() //lift servo 3
{
  myservo1.write(0);
  delay(del);
  myservo2.write(0);
  delay(del);
  myservo3.write(90);
  delay(del);
  myservo4.write(0);
  delay(del);
}

void gamma() //lift servo 4
{
  myservo1.write(0);
  delay(del);
  myservo2.write(0);
  delay(del);
  myservo3.write(0);
  delay(del);
  myservo4.write(90);
  delay(del);
}

void omega()
{
  myservo1.write(90);
  delay(del);
  myservo2.write(90);
  delay(del);
  myservo3.write(90);
  delay(del);
  myservo4.write(90);
  delay(del);
}
void x1()
{
  myservo1.write(90);
  delay(del);
  myservo2.write(0);
  delay(del);
  myservo3.write(90);
  delay(del);
  myservo4.write(0);
  delay(del);
}
void x2()
{
  myservo1.write(0);
  delay(del);
  myservo2.write(90);
  delay(del);
  myservo3.write(0);
  delay(del);
  myservo4.write(90);
  delay(del);
}
void top()
{
  myservo1.write(90);
  delay(del);
  myservo2.write(90);
  delay(del);
  myservo3.write(0);
  delay(del);
  myservo4.write(0);
  delay(del);
}
void bottom()
{
  myservo1.write(0);
  delay(del);
  myservo2.write(0);
  delay(del);
  myservo3.write(90);
  delay(del);
  myservo4.write(90);
  delay(del);
}

