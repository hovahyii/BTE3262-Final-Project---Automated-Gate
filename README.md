# LDR Sensor with ESP8266-12E + Blynk IoT

<img src="/overall.jpg">

This project involves using an LDR sensor and a button in a Blynk app to control a servo motor and an LED. The LDR sensor is used to detect the ambient light level and open or close the servo motor based on the sensor's reading. The button in the Blynk app is used to turn an LED on or off. This project demonstrates the ability to remotely control physical devices using a Blynk app and an ESP8266 microcontroller.


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