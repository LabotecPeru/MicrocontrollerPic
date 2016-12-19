#include "servomotor.h"

unsigned int16 i = 0;
unsigned int16 angle = 0;

#INT_TIMER2
void TMR2_isr( ){
   output_high(PIN_CTRL);
   delay_us( angle );
   output_low(PIN_CTRL);
}

void servomotor_init(){
   set_tris_c(0b10000000);
   setup_timer_2( PRESCALER, PR2 , POSTSCALER );
   enable_interrupts( INT_TIMER2 ); 
   enable_interrupts(GLOBAL);
   
}

void ServoWriteAngle(float x){
   unsigned int16 out;
   out = (x - IN_MIN) * (OUT_MAX - OUT_MIN) / (IN_MAX - IN_MIN) + OUT_MIN;
   angle = out;
}
