#include<AFMotor.h>
AF_DCMotor base(1);
AF_DCMotor shoulder(2);
AF_DCMotor elbow(3);
AF_DCMotor gripper(4);

void setup() 
{
  base.setSpeed(200);
  shoulder.setSpeed(150);
  elbow.setSpeed(150);
  gripper.setSpeed(100);
  base.run(RELEASE);
  shoulder.run(RELEASE);
  elbow.run(RELEASE);
  gripper.run(RELEASE);
}

void loop() 
{
  // AT POINT A
  elbow.run(FORWARD);
  shoulder.run(FORWARD);
  delay(1000);
  elbow.run(RELEASE);
  shoulder.run(RELEASE);
  
  gripper.run(BACKWARD);
  delay(800);
  gripper.run(RELEASE);
  delay(1000);
  
  elbow.run(BACKWARD);
  shoulder.run(BACKWARD);
  delay(1000);
  elbow.run(RELEASE);
  shoulder.run(RELEASE);
  delay(1000);

  //POINT A to POINT B
  base.run(FORWARD);
  delay(800);
  base.run(RELEASE);
  delay(1000);

  //AT POINT B
  elbow.run(FORWARD);
  shoulder.run(FORWARD);
  delay(1000);
  elbow.run(RELEASE);
  shoulder.run(RELEASE);
  delay(1000);
  
  gripper.run(FORWARD);
  delay(800);
  gripper.run(RELEASE);
  delay(1000);

  elbow.setSpeed(200);
  shoulder.setSpeed(200);
  elbow.run(BACKWARD);
  shoulder.run(BACKWARD);
  delay(1500);
  elbow.run(RELEASE);
  shoulder.run(RELEASE);
  delay(1000);

  //POINT B to POINT C
  base.run(FORWARD);
  delay(800);
  base.run(RELEASE);
  delay(1000);

  //AT POINT C
  elbow.setSpeed(150);
  shoulder.setSpeed(150);
  elbow.run(FORWARD);
  shoulder.run(FORWARD);
  delay(1000);
  elbow.run(RELEASE);
  shoulder.run(RELEASE);
  delay(1000);
  
  gripper.run(BACKWARD);
  delay(800);
  gripper.run(RELEASE);
  delay(1000);

  elbow.setSpeed(200);
  shoulder.setSpeed(200);
  elbow.run(BACKWARD);
  shoulder.run(BACKWARD);
  delay(1000);
  elbow.run(RELEASE);
  shoulder.run(RELEASE);
  delay(1000);

  //POINT C to POINT B
  base.run(BACKWARD);
  delay(800);
  base.run(RELEASE);
  delay(1000);

  //AT POINT B
  gripper.run(FORWARD);
  delay(800);
  gripper.run(RELEASE);
  delay(1000);
}
