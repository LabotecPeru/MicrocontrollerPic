// https://www.facebook.com/LaboTecPeru/
#include "16f877a.h"
#fuses   xt
#use     delay(clock =4M)

void main(){

   set_tris_b(0b00001111);
   port_b_pullups(true);
   set_tris_d(0);
   output_d(0xFF);
   
   for(;;){
      if( input(PIN_B0) == 0 ){
         delay_ms(300);
         output_toggle( PIN_D0 );   
      }
      if( input(PIN_B1) == 0 ){
         delay_ms(300);
         output_toggle( PIN_D1 );   
      }
      if( input(PIN_B2) == 0 ){
         delay_ms(300);
         output_toggle( PIN_D2 );   
      }
      if( input(PIN_B3) == 0 ){
         delay_ms(300);
         output_toggle( PIN_D3 );   
      }
   }
}
