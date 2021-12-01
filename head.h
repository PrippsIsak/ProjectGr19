#include "at91sam3x8.h"
#include "system_sam3x.h"

void delay(int Value)
{
    int i;
    for(i=0;i<Value;i++)
            asm("nop");
}

#include "display.c"
#include "keypad.c"

#include "servo.c"
#include "temprature.c"
#include "lightSensor.c"
#include "date.c"

