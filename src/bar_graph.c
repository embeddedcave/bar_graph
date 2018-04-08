#include "bar_graph.h"
#include "led.h"

void bar_graph_set_percent(uint8_t percent)
{
  uint8_t number_of_leds = percent / 25;
  uint8_t i;

  for(i = 0; i < 4; i++)
  {
    if (i < number_of_leds)
    {
      led_turn_on(i);
    }
    else
    {
      led_turn_off(i);
    }
  }
}
