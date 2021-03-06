#include <16f877a.h>
#fuses   XT
#use     delay(clock=4M)
#define  LCD_ENABLE_PIN  PIN_A3                                  
#define  LCD_RS_PIN      PIN_A5                                  
#define  LCD_RW_PIN      PIN_A2                                   
#define  LCD_DATA4       PIN_D4
#define  LCD_DATA5       PIN_D5                                   
#define  LCD_DATA6       PIN_D6                                    
#define  LCD_DATA7       PIN_D7 
#include <lcd.c>
#include "..\LaboTec\ultrasound.c"

void main(){
   unsigned int16 tiempo;
   float distancia;
   
   init_ultrasonico();
   lcd_init();
   lcd_putc('\f');
   printf(lcd_putc,"LaboTecPeru");
   delay_ms(500);
   lcd_putc('\f');
   for(;;){
      tiempo = read_time_ultrasonico();
      distancia = calcular_distancia( tiempo );
      lcd_gotoxy(1,1);
      printf(lcd_putc,"@LaboTecPeru");
      lcd_gotoxy(1,2);
      printf(lcd_putc,"dist=%f",distancia);
      delay_ms(300);
      lcd_putc('\f');      
   }
}
