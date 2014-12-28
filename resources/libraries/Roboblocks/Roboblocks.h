#ifndef __ROBOBLOCKS_H__
#define __ROBOBLOCKS_H__

#if ARDUINO >= 100
#include "Arduino.h"
#include "Print.h"
#else
#include "WProgram.h"
#endif

class Roboblocks
{
private:
public:
  Roboblocks(void);

  void blinkLed(void);
};

#endif
