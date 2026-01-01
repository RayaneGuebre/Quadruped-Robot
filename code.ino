#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <esp_now.h>
#include <WiFi.h>
#include "const.h"

#define SERVO_NUM 12
#define SERVO_MIN 100
#define SERVO_MAX 600
#define SERVO_DELAY 1000
#define N_LEGS 4
#define N_AXIS 3
int u = 0,
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

int servoPins[SERVO_NUM]= {0,1,2,3,4,5,6,7,8,9,10, 11}
String command;

void setup(){
int u = 0;


pwm.begin();

pwm.setPWMFreq(50);

for(int i = 0; i < SERVO_NUM; i++){
    pwm.setPWM(servoPins[i], 0, 0);
}

 if (esp_now_init() != ESP_OK) {
  Serial.println("Error initializing ESP-NOW");
  return;

    }

    	WiFi.mode(WIFI_STA);


}
void loop(){



 }



void walkStraight(){
    
    int n = 0;
    while(true){
        pwm.setPWM(servoPins[n + 2], 0, angleToPulse(30));
        pwm.setPWM(servoPins[n], 0, angleToPulse(-45));
       
    

        pwm.setPWM(servoPins[n + 4], 0, angleToPulse(30));
        pwm.setPWM(servoPins[(n + 2) + 4], 0, angleToPulse(30));

        n = (n + 2) % 4
        delay(150);
    }
}
void walkBack(){
    
    int n = 0;
    while(true){
        pwm.setPWM(servoPins[n + 2], 0, angleToPulse(-30));
        pwm.setPWM(servoPins[n], 0, angleToPulse(45));
       
    

        pwm.setPWM(servoPins[n + 4], 0, angleToPulse(45));
        pwm.setPWM(servoPins[(n + 2) + 4], 0, angleToPulse(-30));

        n = (n + 2) % 4
        delay(150);
    }
}



int angleToPulse(int ang) {
  int pulse = map(ang, 0, 180, SERVO_MIN, SERVO_MAX);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse);
  return pulse;
}