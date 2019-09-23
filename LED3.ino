#include <Grove_LED_Bar.h>

int i;

Grove_LED_Bar __bar3(4, 3, 0);

void setup()
{
  __bar3.begin();
}

void loop()
{
  for (i = 0; i <= 1023; i++) {
    __bar3.setBits(i);
    delay(50);
  }
  for (i = 1023; i >= 64; i--) {
    __bar3.setBits(i);
    delay(50);
  }

  
}
