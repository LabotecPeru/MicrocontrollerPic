#ifndef __UART
#define __UART

#use RS232(BAUD = 9600,XMIT = PIN_C6, RCV = PIN_C7)

void uart_init();

#endif

