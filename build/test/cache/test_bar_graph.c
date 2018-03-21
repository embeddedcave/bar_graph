#include "build/temp/_test_bar_graph.c"
#include "mock_led.h"
#include "bar_graph.h"
#include "unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_bar_graph_0_percent_all_off(void)

{

  led_turn_off_CMockExpect(16, 0);

  led_turn_off_CMockExpect(17, 1);

  led_turn_off_CMockExpect(18, 2);

  led_turn_off_CMockExpect(19, 3);



  bar_graph_set_percent(0);

}
