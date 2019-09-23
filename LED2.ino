#include <Grove_LED_Bar.h>

int i;

Grove_LED_Bar __bar3(4, 3, 0);

void setup()
{
  __bar3.begin();
}

void loop()
{
  for (i = 0; i <= 10; i++) {
    __bar3.setLevel(i);
    delay(1000);
  }

  delay(1000);
}
