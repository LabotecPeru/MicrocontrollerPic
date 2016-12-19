#include "timer0.h"

#INT_RTCC
void TIMER0_isr(){
   output_toggle( TMR0_SIGNAL );
   set_timer0( TMR0_CHARGE );
}

void timer0_init(){
   // Generate interrupt each 1ms
   // TMR0_PRESCALER    = 8
   // TMR0_CHARGE       = 131
   setup_timer_0( RTCC_INTERNAL | RTCC_DIV_8 );
   set_timer0( TMR0_CHARGE );
   enable_interrupts( INT_RTCC );
   enable_interrupts( GLOBAL );
}
