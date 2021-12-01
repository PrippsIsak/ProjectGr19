#include "at91sam3x8.h"
#include "system_sam3x.h"
int keyStatus;
int flagTime;
int timeStatus = 0;
double checkTemp = 0;
int flag;
int dateFlag = 0;
unsigned int tempStatus = 0, resetDel=0, tFlag1 =0, tFlag2 =1;  // FIXA 

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
#include "time.c"

void SysTick_Handler(void){
  keyStatus++;
  if(keyStatus == 1000)
    keyStatus = 1;
  if(tFlag1){
    resetDel++;
  }
  if(resetDel==13){
    resetDel=0;
    tFlag1=0;
  }
  if(flagTime ==1)//start
  {
    timeStatus++;
    
    if(timeStatus % 1000 == 0)
    {
      sec++;
      timeStatus = 0;
      printTime(sec);
    }
  }
}




