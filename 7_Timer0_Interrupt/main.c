#include <16f877a.h>
#fuses xt
#use delay(clock=4M)
#include "..\LaboTec\timer0.c"

void main(){

   set_tris_b(0);
   timer0_init();
   
   for(;;){
   }
}
