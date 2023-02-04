# Automated Gate System designed with Arduino Uno, Ultrasonic Sensor, Relay and Switch

<img src="/overall.jpg">

This project is about creating an automated gate system using an Arduino microcontroller. The system is designed to control the opening and closing of the gate through the use of an ultrasonic sensor, a relay, a servo motor, and buttons. The code provided incorporates the functionality of the gate opening when a car approaches it and also allows manual opening by pressing a button. The project is a simple yet effective demonstration of how microcontrollers like the Arduino can be used to automate physical systems and control various components such as relays, LEDs, and servo motors.



<br/>

## Author
- Jehovah Yii Zui Hon TB20091

<br/>

## Teammate
- Wan Nor Samsiah Binti Wan Osman	TB19022
- Affrina Sahira binti Azham	TB19044



<br/>

## Materials
-	Arduino Uno
-	Ultrasonic sensor
-	Breadboard
-	Jumper wire
-	Servo motor
-	5V relay switch
-	Push button switch
-	Green LED
-	Blue LED



<br/>

## Demonstration Video 
[https://youtu.be/XXLqSHF8uAc](https://youtu.be/XXLqSHF8uAc)


<br/>

## Connection

<img src="/circuit.png">

### Ultrasonic Sensor
| Pins        | Arduino Uno          |
| ----------- | -----------          |
| Vcc         | 5V                   |
| Trig        | D4                   |
| Echo        | D5                   |
| Gnd         | Gnd                  | 

### Servo Motor
| Wire              | Arduino Uno   |
| -----------       | -----------   |
| Yellow            | D3            |
| Red               | 5V            |
| Chocolate         | Gnd           |

### Relay Switch
| Pins        | Arduino Uno          |
| ----------- | -----------          |
| S           | D7                   |
| +           | 5V                   |
| -           | D5                   |
| C           | 3.3V                 | 
| NC          | D13                  | 

### Green LED
| Pins        | Arduino Uno   |
| ----------- | -----------   |
| +           | D8            |
| -           | 10kΩ => GND   |


### Blue LED
| Pins        | Arduino Uno   |
| ----------- | -----------   |
| +           | D13           |
| -           | GND           |

### Push Button
| Pins        | Arduino Uno   |
| ----------- | -----------   |
| 1           | D2            |
| 2           | GND           |

<br/>

### Like this project? You can show your appreciation by buying Hovah a coffee ☕
<a target="_blank" rel="noopener noreferrer" href="https://www.buymeacoffee.com/hovahyii">
<img src="https://github.com/appcraftstudio/buymeacoffee/raw/master/Images/snapshot-bmc-button.png" width="300" style="max-width:100%;">
</a>

<br/>