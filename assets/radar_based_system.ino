#include <Servo.h>

Servo abhayservo;
int echopin = 9;
int trigpin = 10;

int angle = 0;
int step = 5;
int direction = 1;

long duration;
float distance;

void setup() {
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  Serial.begin(9600);
  abhayservo.attach(11);
}

void loop() {
  abhayservo.write(angle);
  delay(60);

  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigpin, LOW);

  duration = pulseIn(echopin, HIGH, 30000);

  if (duration == 0) {
    distance = 400;
  } else {
    distance = duration * 0.034 / 2;
  }

  Serial.print(angle);
  Serial.print(",");
  Serial.println(distance);

  angle += step * direction;

  if (angle >= 180) direction = -1;
  if (angle <= 0) direction = 1;

  delay(40);
}