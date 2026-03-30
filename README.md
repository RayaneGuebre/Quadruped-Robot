# Quadruped-Robot
<img width="608" height="439" alt="image" src="https://github.com/user-attachments/assets/d1bb387b-0ed7-4aa7-a759-5e7d19041e31" />

## What?
This is a customed-designed quadruped robot designed using Fusion360 and KiCAD, it's inspired by the very common hexapod robot design but i limited myself to 4 legs so that i could code the leg mobement by myself without using inversed kinematics

## How?
the robot central part contains a grid of holes meant for brass heat inserts so that it can be customized and improved in the future
the robot is controlled using a pcb controller connected to the robot motherbooard, both using an esp32
<img width="666" height="402" alt="image" src="https://github.com/user-attachments/assets/eab443b3-b348-4e11-a458-166d7e88b774" />

the motherboard connects each pin of the esp32 to a screw terminal for future upgrades and changes
<img width="400" height="488" alt="image" src="https://github.com/user-attachments/assets/68e57a56-5245-4ef8-85b2-edb686ebacd3" />


## Why?
i started this project after being inspired by Nikodem Bartnik video where he builds another 4 legged robot and after realizing that i designed many project but i haven't built one yet, so here i am

## BOM
[Excel](https://diccollegeliege-my.sharepoint.com/:x:/g/personal/guebnadi_dic-college_be/IQDaeb9gHnVCT5NCyY0ITYx0AWiDlm_dcz0lSPx1PjH2svM?e=zc7VWc)
|FIELD1             |FIELD2  |FIELD3|FIELD4|FIELD5|FIELD6    |FIELD7|309,47 �|FIELD9|FIELD10|FIELD11|FIELD12|FIELD13|FIELD14|FIELD15|FIELD16|
|-------------------|--------|------|------|------|----------|------|--------|------|-------|-------|-------|-------|-------|-------|-------|
|Name               |Price   |Qt    |      |      |Link      |      |Total   |      |       |       |       |       |       |       |       |
|Motherboard Esp32  |21,93 � |1     |      |      |Aliexpress|      |� 21,93 |      |       |       |       |       |       |       |       |
|Controller Esp32   |21,93 � |1     |      |      |Aliexpress|      |� 21,93 |      |       |       |       |       |       |       |       |
|Servo Drivers      |1,65    |1     |      |      |Aliexpress|      |� 1,65  |      |       |       |       |       |       |       |       |
|Servo Motor        |14,01 � |12    |      |      |Aliexpress|      |� 168,12|      |       |       |       |       |       |       |       |
|Motherboard PCB    |25,23 � |1     |      |      |JLCPCB    |      |� 25,23 |      |       |       |       |       |       |       |       |
|Controller PCB     |24,26 � |1     |      |      |JLCPCB    |      |� 24,26 |      |       |       |       |       |       |       |       |
|Joystick + shipping|32,61 � |1     |      |      |Sparkfun  |      |� 32,61 |      |       |       |       |       |       |       |       |
|Terminal blocks    | 6,87 � |2     |      |      |Aliexpress|      |� 13,74 |      |       |       |       |       |       |       |       |
|                   |        |      |      |      |          |      |        |      |       |       |       |       |       |       |       |
|                   |        |      |      |      |          |      |        |      |       |       |       |       |       |       |       |
|                   |        |      |      |      |          |      |        |      |       |       |       |       |       |       |       |
|                   |        |      |      |      |          |      |        |      |       |       |       |       |       |       |       |
|                   |        |      |      |      |          |      |        |      |       |       |       |       |       |       |       |
|                   |        |      |      |      |          |      |        |      |       |       |       |       |       |       |       |
