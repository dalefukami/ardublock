#include "Roboblocks.h"

Roboblocks::Roboblocks(void)
{
}

void Roboblocks::setup(void) {
    pinMode(speedPin, OUTPUT);
    analogWrite(speedPin, speed);
    pinMode(rightMotorPin1, OUTPUT);
    digitalWrite(rightMotorPin1, LOW);
    pinMode(rightMotorPin2, OUTPUT);
    digitalWrite(rightMotorPin2, LOW);
    pinMode(leftMotorPin1, OUTPUT);
    digitalWrite(leftMotorPin1, LOW);
    pinMode(leftMotorPin2, OUTPUT);
    digitalWrite(leftMotorPin2, LOW);

    for(int i = 0; i < sensorCount; i++) {
        pinMode(sensorPins[i], INPUT);
    }
}

void Roboblocks::blinkLed(void)
{
  for (int i=0; i<5; ++i)
  {
    digitalWrite(13, HIGH);
    delay(50);
    digitalWrite(13, LOW);
    delay(100);
  }
}

bool Roboblocks::sensorIsOn(int sensorNumber) {
    return digitalRead(sensorPins[sensorNumber - 1]);
}

bool Roboblocks::sensorIsOff(int sensorNumber) {
    return !digitalRead(sensorPins[sensorNumber - 1]);
}

void Roboblocks::goForward(void) {
    leftMotorForward();
    rightMotorForward();
}

void Roboblocks::goBackward(void) {
    leftMotorBackward();
    rightMotorBackward();
}

void Roboblocks::turnRight(void) {
    leftMotorForward();
    rightMotorBackward();
}

void Roboblocks::turnLeft(void) {
    leftMotorBackward();
    rightMotorForward();
}

void Roboblocks::leftMotorForward(void) {
    motorForward(leftMotorPin1, leftMotorPin2);
}

void Roboblocks::leftMotorBackward(void) {
    motorBackward(leftMotorPin1, leftMotorPin2);
}

void Roboblocks::rightMotorForward(void) {
    motorForward(rightMotorPin1, rightMotorPin2);
}

void Roboblocks::rightMotorBackward(void) {
    motorBackward(rightMotorPin1, rightMotorPin2);
}

void Roboblocks::motorForward(int pin1, int pin2) {
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
}

void Roboblocks::motorBackward(int pin1, int pin2) {
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
}
