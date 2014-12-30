#ifndef __ROBOBLOCKS_H__
#define __ROBOBLOCKS_H__

#if ARDUINO >= 100
#include "Arduino.h"
#include "Print.h"
#else
#include "WProgram.h"
#endif

const int ROBOBLOCKS_SENSOR_COUNT = 5;

class Roboblocks
{
private:
  int leftMotorPin1 = 11;
  int leftMotorPin2 = 12;
  int rightMotorPin1 = 9;
  int rightMotorPin2 = 10;
  int sensorCount = ROBOBLOCKS_SENSOR_COUNT;
  int sensorPins[ROBOBLOCKS_SENSOR_COUNT] = {3,4,5,6,7};

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
