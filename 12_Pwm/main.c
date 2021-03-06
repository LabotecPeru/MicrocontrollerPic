#include <16f877a.h>
#fuses   XT,NOLVP
#use     delay(CLOCK=4M)                                  
#define  LCD_ENABLE_PIN  PIN_A3                                  
#define  LCD_RS_PIN      PIN_A5                                  
#define  LCD_RW_PIN      PIN_A2   
#define  LCD_DATA4       PIN_D4                                   
#define  LCD_DATA5       PIN_D5                                    
#define  LCD_DATA6       PIN_D6                                    
#define  LCD_DATA7       PIN_D7   
#include <lcd.c>
#include "..\LaboTec\pwm.c"

void main(){
   int duty = 125;
  
   pwm_init();
   lcd_init();

   set_tris_b( 0b00000011 );
   printf(lcd_putc, "LABOTEC");
   
   for(;;){
      if( input( PIN_B0 ) == 0 ){
         delay_ms( 300 );
         duty++;
         SetPWM1( duty );
         printf( lcd_putc, "\fDuty:%u", duty );
      }
      
      if( input( PIN_B1 ) == 0 ){
         delay_ms( 300 );
         duty--;
         SetPWM1( duty );
         printf( lcd_putc, "\fDuty:%u", duty );
      }
   }
}



