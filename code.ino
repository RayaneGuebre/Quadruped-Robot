#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

#define SERVO_NUM 12
#define SERVO_MIN 100
#define SERVO_MAX 600
#define SERVO_DELAY 1000
int servoPins[SERVO_NUM] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};


void setup()



pwm.begin();

pwm.setPWMFreq(50);

for(int i = 0, i < SERVO_NUM, i++)
    pwm.setPWM(servoPins[i], 0, 0)
{




}
void loop(){



 }



void walk-straight(){


    While(True){
        pwm.setPWM(servoPins[0], )
    }
}