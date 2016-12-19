#include <16f877a.h> 
#fuses XT
#use delay(clock=4Mhz) 

void main(void){ 
   int valores[10]={ 0x03F,0x06,0x5B,0x4F,0x66,
                     0x6D,0x7D,0x47,0x7F,0x67   };
   int i=0;        
   set_tris_a(0x00);
   set_tris_d(0x00); 
   
   output_a(0b11110111);
   for(;;){
      for( i=0; i < 10; i++){
         output_d( ~(valores[i]) ); 
         delay_ms( 300 );
      }
   }
}








