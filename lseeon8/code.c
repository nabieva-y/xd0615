/*
  Sweep

  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h> 
//引入Servo库  控制伺服电机

int pos = 0;

Servo servo_9; //创建伺服对象

void setup()
{
  servo_9.attach(9);//将9号引脚上的伺服电机连接到伺服对象上

}

void loop()
{
  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees每次转动1度，将伺服电机从0度转到180度。
  for (pos = 0; pos <= 180; pos += 1) {
    // tell servo to go to position in variable 'pos'
    //根据变量‘pos’的值设定伺服电机的位置。
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    //延时15ms.
    delay(15); // Wait for 15 millisecond(s)
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    // tell servo to go to position in variable 'pos'
    //根据变量‘pos’的值设定伺服电机的位置。
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    //延时15ms.
    delay(15); // Wait for 15 millisecond(s)
  }
}