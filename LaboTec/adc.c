#include "adc.h"

void adc_init(){
   setup_adc(   ADC_CLOCK  );
   setup_adc_ports(  ADC_PORT );   
}

