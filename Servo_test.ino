/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 28 May 2015
  by Michael C. Miller
  modified 8 Nov 2013
  by Scott Fitzgerald
  http://arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
int state;
Servo servo;  // create servo object to control a servo
void setup() {
pinMode(D0,INPUT);
pinMode(D2,OUTPUT);
  servo.attach(D2);  // attaches the servo on GIO2 to the servo object
  servo.write(0);
  Serial.begin(9600);
}

void loop() {
  int pos;
  state=digitalRead(D0);
  Serial.println(state);
  digitalWrite(D2,state);
    servo.write(90);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
