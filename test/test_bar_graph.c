#include "unity.h"
#include "bar_graph.h"

#include "mock_led.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_bar_graph_0_percent_all_off(void)
{
  led_turn_off_Expect(0);
  led_turn_off_Expect(1);
  led_turn_off_Expect(2);
  led_turn_off_Expect(3);
    
  bar_graph_set_percent(0);
}
