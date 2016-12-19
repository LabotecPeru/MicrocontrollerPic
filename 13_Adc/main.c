#include <16f877a.h>
#fuses   XT
#DEVICE  ADC = 10
#use     delay(CLOCK = 4M)                                 
#define  LCD_ENABLE_PIN  PIN_A3                                  
#define  LCD_RS_PIN      PIN_A5                                  
#define  LCD_RW_PIN      PIN_A2   
#define  LCD_DATA4       PIN_D4                                   
#define  LCD_DATA5       PIN_D5                                    
#define  LCD_DATA6       PIN_D6                                    
#define  LCD_DATA7       PIN_D7   
#include <lcd.c>
#include "..\LaboTec\adc.c"

void main(){
   int16 adc1;
   
   adc_init();
   lcd_init();
   lcd_putc('\f');
   printf(lcd_putc,"LaboTecPeru");
   delay_ms(500);
   lcd_putc('\f');
   for(;;){
      set_adc_channel( ADC_CHANNEL );
      delay_us(20);
      adc1 = read_adc();  
      lcd_gotoxy(1,1);
      printf(lcd_putc,"@LaboTecPeru");
      lcd_gotoxy(1,2);
      printf(lcd_putc,"CanalAN0 = %Lu",adc1);
      delay_ms(100);
      lcd_putc('\f');
   }
}

