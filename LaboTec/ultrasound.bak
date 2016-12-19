#include "ultrasound.h"

void init_ultrasonico(){

   set_tris_c(0b00000001);

   output_low(TRIG1);
   
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_8);   
}

unsigned int16 read_time_ultrasonico(){
   unsigned int16 time;
   output_high(TRIG1);                  
   delay_us(20);                      
   output_low(TRIG1);
   while(!input(ECHO1))  {}
   set_timer1(0);                        
   while(input(ECHO1))   {
      time=get_timer1();  
      if(time > 3000){
         time = 3000;
         set_timer1(0); 
         break;
      }
   }
   set_timer1(0);  
   return time;
}

float calcular_distancia(unsigned int16 tiempo){
   float distancia;
   distancia = tiempo * 0.136 * 1.05;
   return distancia;

}


