#include "pwm.h"

void SetPWM1(int16 DutyCycle){

    CCPR1L = (DutyCycle>>2);

    CCP1CONbits.CCP1X = ((DutyCycle & 2)>>1);
    CCP1CONbits.CCP1Y = (DutyCycle & 1);
}

void pwm_init(){
   set_tris_c( 0b00000000 );
   setup_timer_2( PWM_PRESCALER ,PWM_PERIOD, PWM_POSTSCALER);   
   // PWM Period = (62+1)*4*(1/4Mhz)*16 = 1Khz
   setup_ccp1(CCP_PWM);                // Enabled PWM1
}

void pwm_init_register(void){

   // CONFIGURACION DEL PERIODO DE TIMER2
   PR2 = 62;
   // CICLO DE TRABAJO - 50% -> 0b0001111101
   CCPR1L = 0b00011111;
   CCP1CONbits.CCP1X = 0;
   CCP1CONbits.CCP1Y = 1;
   // PIN CCP1 COMO SALIDA
   TRISCbits.TRISC2 = 0;
   //  PRESCALER TIMER2 16
   T2CONbits.T2CKPS0 = 1;
   T2CONbits.T2CKPS1 = 1;
   // MODULO CCPP EN MODO PWM
   CCP1CONbits.CCP1M3 = 1;
   CCP1CONbits.CCP1M2 = 1;
   CCP1CONbits.CCP1M1 = 0;
   CCP1CONbits.CCP1M0 = 0;
   // HABILITO TIMER2
   T2CONbits.TMR2ON = 1;


}
