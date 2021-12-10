#include "at91sam3x8.h"
#include "system_sam3x.h"

struct LinkedList*readSensor(int timeStamp);
struct WeekLinkedList*saveDay();
void insertLast(struct LinkedList **first, struct LinkedList *el);
void weekInsertLast(struct WeekLinkedList **first, struct WeekLinkedList *el);
struct WeekLinkedList *getAddress(struct WeekLinkedList *first,int id);
float findMax(struct LinkedList *first);
float findMin(struct LinkedList *first);
void freeMemory(struct LinkedList**first);
void printTemprature(float temp, int x, int y);
void clearData();
void printTime();
void printDate();
int day;
int month;
int year;
int dateInt();
int id = 0;
int speedrun = 0;
int keyStatus;
int printDataFlag = 0;
int posDay = 0;
int flagTime;//to enable the time
int size = 0; //usuing for find avrage.
int weekSize = 0;
int timeStatus = 0;//calculate time with, in milliseconds
float checkTemp = 0;
int flag;
int dateFlag = 0;
int readyDate = -1;//to not overprint the date
int measureFlag = -1;//triggers with every minute, to take temprature
int sec; // main variable for the time
float temprature = 0;//saved as a global for easy accsess
float totTemp = 0;//avoid iteration
float avg;// to save the avg
float maxTemp = 0;//something low to compare with
float minTemp =1000;//something high to compare with
int minStamp;//accsess the time when a new min is found
int maxStamp;//accsess the time when a new max is found
int minTempFlag = -1;//triggers when a new min is found to print
int maxTempFlag = -1;//triggers when a new max is found to print
int nextPrintFlag = 0;
int prevPrintFlag = 0;
struct LinkedList * listTemprature;
struct WeekLinkedList * WeekTemprature;
unsigned int tempStatus = 0, resetDel=0, tFlag1 =0, tFlag2 =1;  // FIXA 

void delay(int Value)
{
    int i;
    for(i=0;i<Value;i++)
            asm("nop");
}

#include "LinkedList.c"
#include "display.c"
#include "keypad.c"

#include "servo.c"
#include "temprature.c"
#include "lightSensor.c"
#include "date.c"
#include "time.c"
#include "program.c"


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
      sec+= 1 + (speedrun*1199);
      timeStatus = 0;
      printTime(sec,216,1);
    }
  }
}




