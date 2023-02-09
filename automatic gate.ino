#include <Servo.h>

#define trigPin 4
#define echoPin 5
#define buttonPin 2
#define relayPin 7
#define blueLedPin 13
#define greenLedPin 8
#define servoPin 3

Servo myServo;
bool buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(relayPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  myServo.attach(servoPin);
}

void loop() {
  long duration, distance=0;
  buttonState = digitalRead(buttonPin);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1; // Divide by 29.1 to convert the distance to centimeters
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");    

  if (!buttonState) {
    digitalWrite(relayPin, HIGH);
    digitalWrite(blueLedPin, HIGH);
    digitalWrite(greenLedPin, LOW);
    myServo.write(90);
     delay(5000);
    myServo.write(0);
    Serial.print("Button Press: 1\n");

  } else {
    digitalWrite(relayPin, LOW);
    digitalWrite(blueLedPin, LOW);
    Serial.print("Button Press: 0\n");

      if (distance > 0 && distance <= 10) {
        digitalWrite(greenLedPin, HIGH);
        myServo.write(90);
      } else  {
        digitalWrite(greenLedPin, LOW);
        myServo.write(0);
      }
  

  }


  

}
