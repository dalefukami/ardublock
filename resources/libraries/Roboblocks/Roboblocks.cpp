#include "Roboblocks.h"

Roboblocks::Roboblocks(void)
{
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




