#include "at91sam3x8.h"
#include "system_sam3x.h"
#include "pins.c"



void ledConfig(){
  *AT91C_PMC_PCER = 1<<14;
  *AT91C_PIOD_PER = pin28;
  *AT91C_PIOD_PPUDR = pin28;
  *AT91C_PIOD_OER = pin28;
}

void setLed(int led){
  if(!led)
    *AT91C_PIOD_CODR = pin28;
  else
    *AT91C_PIOD_SODR = pin28;
}