#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>



Adafruit_MPU6050 mpu;

#define TRIG_HEAD 18
#define ECHO_HEAD 19
#define TRIG_FRONT 32
#define ECHO_FRONT 33
#define TRIG_STAIR 25
#define ECHO_STAIR 26

#define WATER_PIN 34
#define VIBRATION_PIN 27
#define SOS_BUTTON 14

float getDistanceCM(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000);
  if (duration == 0) return 999;
  return duration * 0.0343 / 2;
}

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22);

  pinMode(TRIG_HEAD, OUTPUT);
  pinMode(ECHO_HEAD, INPUT);
  pinMode(TRIG_FRONT, OUTPUT);
  pinMode(ECHO_FRONT, INPUT);
  pinMode(TRIG_STAIR, OUTPUT);
  pinMode(ECHO_STAIR, INPUT);

  pinMode(WATER_PIN, INPUT);
  pinMode(VIBRATION_PIN, OUTPUT);
  pinMode(SOS_BUTTON, INPUT_PULLUP);

  if (!mpu.begin(0x68)) {
    Serial.println("MPU6050 not found, continuing without IMU...");
  } else {
    Serial.println("MPU6050 found.");
  }

  Serial.println("BlindNav starter firmware ready.");
}





void loop() {
  float headDist = getDistanceCM(TRIG_HEAD, ECHO_HEAD);
  float frontDist = getDistanceCM(TRIG_FRONT, ECHO_FRONT);
  float stairDist = getDistanceCM(TRIG_STAIR, ECHO_STAIR);
  int waterValue = analogRead(WATER_PIN);

  Serial.print("Head: ");
  Serial.print(headDist);
  Serial.print(" cm | Front: ");
  Serial.print(frontDist);
  Serial.print(" cm | Stair: ");
  Serial.print(stairDist);
  Serial.print(" cm | Water: ");
  Serial.println(waterValue);

  if (headDist < 40 || frontDist < 40 || stairDist < 40 || waterValue > 1800) {
    digitalWrite(VIBRATION_PIN, HIGH);
  } else {
    digitalWrite(VIBRATION_PIN, LOW);
  }

  if (digitalRead(SOS_BUTTON) == LOW) {
    Serial.println("SOS triggered - GPS alert placeholder");
    delay(1000);
  }

  delay(300);
}
