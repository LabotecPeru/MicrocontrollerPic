#ifndef  __TIMER0__
#define  __TIMER0__

#define TMR0_PRESCALER    RTCC_DIV_8
#define TMR0_CHARGE       131
#define TMR0_SIGNAL       PIN_B1

void timer0_init();

#endif
