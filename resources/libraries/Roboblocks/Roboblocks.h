#ifndef __ROBOBLOCKS_H__
#define __ROBOBLOCKS_H__

#if ARDUINO >= 100
#include "Arduino.h"
#include "Print.h"
#else
#include "WProgram.h"
#endif

const int ROBOBLOCKS_SENSOR_COUNT = 5;
const int speedPin = 9; // PWM pin for speed control
const int speed = 128;
const int leftMotorPin1 = 11;
const int leftMotorPin2 = 12;
const int rightMotorPin1 = 8;
const int rightMotorPin2 = 10;
const int sensorCount = ROBOBLOCKS_SENSOR_COUNT;
const int sensorPins[ROBOBLOCKS_SENSOR_COUNT] = {3,4,5,6,7};

class Roboblocks
{
private:

  void leftMotorForward(void);
  void leftMotorBackward(void);
  void rightMotorForward(void);
  void rightMotorBackward(void);
  void motorForward(int pin1, int pin2);
  void motorBackward(int pin1, int pin2);

public:
  Roboblocks(void);

  void setup(void);

  void blinkLed(void);

  bool sensorIsOn(int sensorNumber);
  bool sensorIsOff(int sensorNumber);

  void goForward(void);
  void goBackward(void);
  void turnLeft(void);
  void turnRight(void);
};

#endif
