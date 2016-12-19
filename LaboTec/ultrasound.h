#ifndef  __ULTRASONICO__
#define  __ULTRASONICO__

/*
 * LA DISTANCIA SE CALCULA POR LA SIGUIENTE FORMULA
 *    2*DISTANCIA = ESPACIO*TIEMPO
 *    2*DISTANCIA = (340m/s)*TIEMPO
 *    DISTANCIA = 170m/s * TIEMPO
 *
 * EL TIEMPO SE CALCULA CON TIMER1
 *    TIEMPO = 4*TOSC *VALORTIMER1*PRESCALER
 *    TIEMPO = (4/4MHZ)*VALORTIMER1*8   
 *    TIEMPO = (8us)*(VALORTIMER1)
 *
 *    ENTONCES LA ECUACION QUEDA:
 *    
 *    DISTANCIA = (170m/s)*(8us)*(VALORTIMER1)
 *    DISTANCIA = (170m/s)*(8us)*(VALORTIMER1)
 *    DISTANCIA = (0.136)*(VALORTIMER1) cm
 *
 **/
#define  TRIG1 PIN_C1
#define  ECHO1 PIN_C0

void  init_ultrasonico();
int16 read_ultrasonico();
float calcular_distancia(unsigned int16 tiempo);

#endif
