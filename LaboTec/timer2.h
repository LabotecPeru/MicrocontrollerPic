#ifndef  __TIMER0__
#define  __TIMER0__

#define TMR2_PRESCALER    T2_DIV_BY_4
#define TMR2_POSTSCALER   2
#define TMR2_PR2          124
#define TMR2_SIGNAL       PIN_B0

void timer2_init();

#endif
