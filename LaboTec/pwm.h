#ifndef __SPI__
#define __SPI__

#define PWM_PRESCALER   T2_DIV_BY_16
#define PWM_POSTSCALER  1
#define PWM_PERIOD      62 

#BYTE CCPR1L = 0x15
#BYTE PR2 = 0x92

struct  {
   unsigned char T2CKPS0   :1;
   unsigned char T2CKPS1   :1;
   unsigned char TMR2ON    :1;
   unsigned char TOUTPS0   :1;
   unsigned char TOUTPS1   :1;
   unsigned char TOUTPS2   :1;
   unsigned char TOUTPS3   :1;
} T2CONbits;
#byte T2CONbits =  0x12

struct  {
   unsigned char CCP1M0 :1;
   unsigned char CCP1M1 :1;
   unsigned char CCP1M2 :1;
   unsigned char CCP1M3 :1;
   unsigned char CCP1Y  :1;
   unsigned char CCP1X  :1;
} CCP1CONbits;
#byte CCP1CONbits  =  0x17

struct  {
   unsigned char TRISC0 :1;
   unsigned char TRISC1 :1;
   unsigned char TRISC2 :1;
   unsigned char TRISC3 :1;
   unsigned char TRISC4 :1;
   unsigned char TRISC5 :1;
   unsigned char TRISC6 :1;
   unsigned char TRISC7 :1;
} TRISCbits;
#byte TRISCbits    =  0x87  

void SetPWM1(int16 DutyCycle);
void pwm_init(void);
void pwm_init_register(void);

#endif
