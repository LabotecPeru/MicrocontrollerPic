#include "uart.h"

char data = '-';

#INT_RDA 
void recibir(){
   data = getc();
} 

void uart_init(){
   enable_interrupts(INT_RDA);
   enable_interrupts(GLOBAL); 
}
