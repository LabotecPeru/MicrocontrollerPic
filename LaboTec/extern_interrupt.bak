#include "extern_interrupt.h"

int var_externinterrupt = 0;

#INT_EXT
void INT_EXT_isr(){
   var_externinterrupt = 1;
}

void externinterrupt_init(){
   ext_int_edge( RISING_EDGE );
   enable_interrupts( INT_EXT );
   enable_interrupts( GLOBAL );
}
