#include <esp_now.h>
#include <WiFi.h>
#include "const.h"

// REPLACE WITH MAC ADRESS OF THE MOTHERBOARD
uint8_t broadcastAddress[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};


//REPLACE WITH CORRECT PINS
#define left_joystick_h_pin 1
#define left_joystick_v_pin 2

#define right_joystick_h_pin 3
#define right_joystick_v_pin 4

#define button_1_pin 5
#define button_2_pin 6
#define button_3_pin 7
#define button_4_pin 8


String command;

void setup()
{


    pinMode(left_joystick_h_pin, INPUT);
    pinMode(left_joystick_v_pin, INPUT);

    pinMode(right_joystick_h_pin, INPUT);
    pinMode(right_joystick_v_pin, INPUT);

    pinMode(button_1_pin, INPUT_PULLUP);
    pinMode(button_2_pin, INPUT_PULLUP);
    pinMode(button_3_pin, INPUT_PULLUP);
    pinMode(button_4_pin, INPUT_PULLUP);





    if (esp_now_init() != ESP_OK) {
  Serial.println("Error initializing ESP-NOW");
  return;

    }



// Register peer
memcpy(peerInfo.peer_addr, broadcastAddress, 6);
peerInfo.channel = 0;
peerInfo.encrypt = false;

// Add peer
if (esp_now_add_peer(&peerInfo) != ESP_OK){
  Serial.println("Failed to add peer");
  return;
}



}
void loop()
{

if(analogRead(left_joystick_v_pin) < 489 ){
    command = "walk_straight";
esp_err_t result = esp_now_send(MAC_RECEIVER_1, (uint8_t*)command.c_str(), command.length());
}

if(analogRead(left_joystick_v_pin) > 491 ){
    command = "walk_back";
esp_err_t result = esp_now_send(MAC_RECEIVER_1, (uint8_t*)command.c_str(), command.length());
}


if(analogRead(left_joystick_h_pin) > 512 ){
    command = "walk_right";
esp_err_t result = esp_now_send(MAC_RECEIVER_1, (uint8_t*)command.c_str(), command.length());
}

if(analogRead(left_joystick_h_pin) < 509 ){
    command = "walk_left";
esp_err_t result = esp_now_send(MAC_RECEIVER_1, (uint8_t*)command.c_str(), command.length());
}

if(digitalRead(button_1_pin) == LOW){
    command = "button_1";
esp_err_t result = esp_now_send(MAC_RECEIVER_1, (uint8_t*)command.c_str(), command.length());
}
if(digitalRead(button_2_pin) == LOW){
    command = "button_2";
esp_err_t result = esp_now_send(MAC_RECEIVER_1, (uint8_t*)command.c_str(), command.length());
}
if(digitalRead(button_3_pin) == LOW){
    command = "button_3";
esp_err_t result = esp_now_send(MAC_RECEIVER_1, (uint8_t*)command.c_str(), command.length());
}
if(digitalRead(button_4_pin) == LOW){
    command = "button_4";
esp_err_t result = esp_now_send(MAC_RECEIVER_1, (uint8_t*)command.c_str(), command.length());
}




//right joystick
if(analogRead(rigth_joystick_v_pin) < 489 ){
    command = "go_high";
esp_err_t result = esp_now_send(MAC_RECEIVER_1, (uint8_t*)command.c_str(), command.length());
}

if(analogRead(rigth_joystick_v_pin) > 491 ){
    command = "go_low";
esp_err_t result = esp_now_send(MAC_RECEIVER_1, (uint8_t*)command.c_str(), command.length());
}


if(analogRead(rigth_joystick_h_pin) > 512 ){
    command = "rotate_rigth"
esp_err_t result = esp_now_send(MAC_RECEIVER_1, (uint8_t*)command.c_str(), command.length());
}

if(analogRead(rigth_joystick_h_pin) < 509 ){
    command = "rotate_left"
esp_err_t result = esp_now_send(MAC_RECEIVER_1, (uint8_t*)command.c_str(), command.length());
}




if (result == ESP_OK) {
  Serial.println("Sent with success");
}
else {
  Serial.println("Error sending the data");
}
}

