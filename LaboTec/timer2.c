#include "timer2.h"

#INT_TIMER2
void TIMER2_isr(){
   output_toggle( TMR2_SIGNAL );
}

void timer2_init(){
   // Generate interrupt each 1ms
   // TMR2_PRESCALER    = 4
   // TMR2_POSTSCALER   = 2
   // TMR2_PR2          = 124
   setup_timer_2( TMR2_PRESCALER, TMR2_PR2, TMR2_POSTSCALER );
   enable_interrupts( INT_TIMER2 );
   enable_interrupts( GLOBAL );
}
