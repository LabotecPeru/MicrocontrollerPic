#include <16f877a.h>
#fuses   xt
#use     delay(clock=4M)
#define  LCD_ENABLE_PIN  PIN_A3                                  
#define  LCD_RS_PIN      PIN_A5                                  
#define  LCD_RW_PIN      PIN_A2                                   
#define  LCD_DATA4       PIN_D4
#define  LCD_DATA5       PIN_D5                                   
#define  LCD_DATA6       PIN_D6                                    
#define  LCD_DATA7       PIN_D7 
#include <lcd.c>
#include "..\LaboTec\extern_interrupt.c"

void main(){
   int i;
   lcd_init();
   externinterrupt_init();
   lcd_putc('\f');
   printf(lcd_putc,"LaboTecPeru");
   delay_ms(500);
   lcd_putc('\f');
   for(;;){
      for(i=0;i<=100;i++){
         printf(lcd_putc,"Count:%u",i);
         delay_ms(1000);
         lcd_putc('\f');
         if(var_externinterrupt == 1){
            printf(lcd_putc,"\fINTERRUPT");
            delay_ms(300);
            lcd_putc('\f');
            var_externinterrupt = 0;
         }
      }
   }

}


