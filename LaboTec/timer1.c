#include "timer1.h"

#INT_TIMER1
void TIMER1_isr(){
   output_toggle( TMR1_SIGNAL );
   set_timer1( TMR1_CHARGE );
}

void timer1_init(){
   // Generate interrupt each 1ms
   // TMR1_PRESCALER    = 8
   // TMR1_CHARGE       = 65411
   setup_timer_1( T1_INTERNAL|TMR1_PRESCALER );
   set_timer1( TMR1_CHARGE );
   enable_interrupts( INT_TIMER1 );
   enable_interrupts( GLOBAL );
}
