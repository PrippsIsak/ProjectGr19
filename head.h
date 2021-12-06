#include "at91sam3x8.h"
#include "system_sam3x.h"

struct LinkedList*readSensor(int timeStamp);
void insertLast(struct LinkedList **first, struct LinkedList *el);
float findMax(struct LinkedList *first);
float findMin(struct LinkedList *first);
void printDate();
int keyStatus;
int printDataFlag = 0;
int flagTime;
int size = 0;
int timeStatus = 0;
float checkTemp = 0;
int flag;
int dateFlag = 0;
int readyDate = -1;
int measureFlag = -1;
float temprature = 0;
float totTemp = 0;
int minStamp = 0;
int maxStamp = 0;
struct LinkedList * listTemprature;
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
#include "program.c"
#include "LinkedList.c"

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
  if(flagTime==1)//start
  {
    timeStatus++;
    
    if(timeStatus % 1000 == 0)
    {
      sec++;
      timeStatus = 0;
      printTime(sec,216,1);
    }
  }

}




