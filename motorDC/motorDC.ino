#include<AFMotor.h>
AF_DCMotor motor1(3);
AF_DCMotor motor2(1);

void setup() {
  // put your setup code here, to run once:
motor1.setSpeed(255);
motor2.setSpeed(255);
}

void loop() {
  // put your main code here, to run repeatedly:
motor1.run(FORWARD);

motor2.run(FORWARD);
delay(1000);

motor1.run(RELEASE);

motor2.run(RELEASE);
delay(1000);

}
