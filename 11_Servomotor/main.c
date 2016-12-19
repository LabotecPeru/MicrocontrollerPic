#include <16f877a.h>
#fuses XT
#use delay(clock=4M)
#define LCD_ENABLE_PIN  PIN_A3                                  
#define LCD_RS_PIN      PIN_A5                                  
#define LCD_RW_PIN      PIN_A2                                   
#define LCD_DATA4       PIN_D4
#define LCD_DATA5       PIN_D5                                   
#define LCD_DATA6       PIN_D6                                    
#define LCD_DATA7       PIN_D7 
#include <lcd.c>
#include "..\LaboTec\servomotor.c"

void main(){
   int angulo = 0;
   servomotor_init();
   lcd_init();
   printf(lcd_putc,"LaboTEC");
   ServoWriteAngle( 0 );
   for(;;){
     for( angulo = 0; angulo <= 180; angulo++){
      ServoWriteAngle( angulo );
      delay_ms(10);
     }
     for( angulo = 180; angulo > 0; angulo--){
      ServoWriteAngle( angulo );
      delay_ms(10);
     }
   }
}
