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



void test_bar_graph_100_percent_all_on(void)

{

  led_turn_on_CMockExpect(26, 0);

  led_turn_on_CMockExpect(27, 1);

  led_turn_on_CMockExpect(28, 2);

  led_turn_on_CMockExpect(29, 3);





  bar_graph_set_percent(100);

}



void test_bar_graph_25_percent_one_on(void)

{

  led_turn_on_CMockExpect(37, 0);

  led_turn_off_CMockExpect(38, 1);

  led_turn_off_CMockExpect(39, 2);

  led_turn_off_CMockExpect(40, 3);



  bar_graph_set_percent(25);

}



void test_bar_graph_26_percent_one_on(void)

{

  led_turn_on_CMockExpect(47, 0);

  led_turn_off_CMockExpect(48, 1);

  led_turn_off_CMockExpect(49, 2);

  led_turn_off_CMockExpect(50, 3);



  bar_graph_set_percent(26);

}



void test_bar_graph_50_percent_two_on(void)

{

  led_turn_on_CMockExpect(57, 0);

  led_turn_on_CMockExpect(58, 1);

  led_turn_off_CMockExpect(59, 2);

  led_turn_off_CMockExpect(60, 3);



  bar_graph_set_percent(50);

}
