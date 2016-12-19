#ifndef  __SERVOMOTOR__
#define  __SERVOMOTOR__

/*
 * SERVOMOTOR:
 *    EL PERIODO DE LA SEÑAL ES DE 50Hz 
 *       Motor en sentido horario (0,7 ms)
 *       Motor neutral (1,5 ms)
 *       Motor en sentido antihorario (1,8 ms)
 *
 *    USANDO TIMER2
 *       T=(4/FOSC)*PRESCALER*(VALOR CARGA PR2+1)*POSTSCALER
 *       1/50Hz = (4/4Mhz)*16*(VALOR CARGA PR2+1)*16
 *       PR2 = 77.125
 **/
#DEFINE  PR2         78
#DEFINE  POSTSCALER  16
#DEFINE  PRESCALER   T2_DIV_BY_16
#DEFINE  PIN_CTRL    PIN_C0

#DEFINE  IN_MIN      0
#DEFINE  IN_MAX      180
#DEFINE  OUT_MIN     700
#DEFINE  OUT_MAX     2600

void servomotor_init();
void ServoWriteAngle(float x);

#endif
