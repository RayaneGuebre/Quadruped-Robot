#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

#define SERVO_NUM 12
#define SERVO_MIN 100
#define SERVO_MAX 600
#define SERVO_DELAY 1000


Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

int servoPins[SERVO_NUM] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};


void setup(){



pwm.begin();

pwm.setPWMFreq(50);

for(int i = 0; i < SERVO_NUM; i++){
    pwm.setPWM(servoPins[i], 0, 0);
}




}
void loop(){



 }



void walkStraight(){

    int i = 0;
    while(true){
        pwm.setPWM(servoPins[i], 0, angleToPulse(45));
        pwm.setPWM(servoPins[(i + 2) % SERVO_NUM],0, angleToPulse(45));
            i = (i + 2) % SERVO_NUM; 
        pwm.setPWM(servoPins[i], 0, angleToPulse(45));
        pwm.setPWM(servoPins[(i + 2) % SERVO_NUM],0, angleToPulse(45));
        i = (i - 1 + SERVO_NUM) % SERVO_NUM;
       
    }
}



int angleToPulse(int ang) {
  int pulse = map(ang, 0, 180, SERVO_MIN, SERVO_MAX);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse);
  return pulse;
}