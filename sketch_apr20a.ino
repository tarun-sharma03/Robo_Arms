#include <AFMotor.h>
AF_DCMotor base (1);
AF_DCMotor shoulder (2);
AF_DCMotor elbow (3);
AF_DCMotor grip (4);
void setup() {
  // put your setup code here, to run once:
 base.setSpeed(75);
 grip.setSpeed(75);
 shoulder.setSpeed(75);
elbow.setSpeed(25);
 base.run(RELEASE);
 grip.run(RELEASE);
 shoulder.run(RELEASE);
 elbow.run(RELEASE);
}

void loop() {
//   put your main code here, to run repeatedly:
  grip.run(BACKWARD);
  delay(150);
  grip.run(RELEASE);
   base.run(FORWARD);
  delay(500);
  base.run(RELEASE);
  shoulder.run(BACKWARD);
  delay(2000);
  shoulder.run(FORWARD);
 elbow.setSpeed(25);
  elbow.run(BACKWARD);
  delay(100);
  shoulder.run(RELEASE);
 elbow.run(RELEASE);
  delay(800);
  elbow.setSpeed(250);
  shoulder.run(BACKWARD);
  elbow.run(FORWARD);
 shoulder.run(RELEASE);
  elbow.run(RELEASE);
  delay(700);
  
  delay(100);
  elbow.run(BACKWARD);
  delay(100);
  shoulder.run(RELEASE);
  elbow.run(RELEASE);
  grip.setSpeed(150);
  grip.run(FORWARD);
  delay(150);
  grip.run(RELEASE);
  base.setSpeed(150);
  base.run(BACKWARD);
  delay(500);
  shoulder.setSpeed(150);
  shoulder.run(FORWARD);
  delay(500);
  elbow.setSpeed(150);
  elbow.run(FORWARD);
  delay(200);

}
