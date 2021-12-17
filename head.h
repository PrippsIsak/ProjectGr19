#include "at91sam3x8.h"
#include "system_sam3x.h"

// GLOBAL VARIABLES AND FUNCTIONS
// Led
void ledConfig();
void setLed(int led);

// Light
float light = 0;
float calcLight();

// Servo
void rotateServo(int deg);

// Date
int day;
int month;
int year;
int dateFlag = 0;
int readyDate = -1;//to not overprint the date

// Time
int speedrun = 0;
int keyStatus;
int hour;
int flagTime;//to enable the time
int timeStatus = 0;//calculate time with, in milliseconds
int sec; // main variable for the time

// Display
void printTemprature(float temp, int x, int y);
void clearData();
void printTime();
void printDate();

// Temprature
struct LinkedList * listTemprature;
struct LinkedList*readSensor(int timeStamp);
void insertLast(struct LinkedList **first, struct LinkedList *el);
void freeMemory(struct LinkedList**first);
int printDataFlag = 0;
int alarmFlag = 0;
int flag;
int maxAlarm = 25;
int minAlarm = 20;
int minTempFlag = -1;//triggers when a new min is found to print
int maxTempFlag = -1;//triggers when a new max is found to print
float temprature = 0;//saved as a global for easy accsess
float totTemp = 0;//avoid iteration
float avg;// to save the avg
float maxTemp = 0;//something low to compare with
float minTemp =1000;//something high to compare with
float checkTemp = 0; //saves what  calcTemp returns
int minStamp;//accsess the time when a new min is found
int maxStamp;//accsess the time when a new max is found
int size = 0; //usuing for find avrage.
int measureFlag = -1;//triggers with every minute, to take temprature
unsigned int tempStatus = 0, resetDel=0, tFlag1 =0, tFlag2 =1; // Flags to know when measure is ready

// Calander
struct WeekLinkedList*saveDay();
struct WeekLinkedList * WeekTemprature;
void weekInsertLast(struct WeekLinkedList **first, struct WeekLinkedList *el);
int posDay = 0;
int nextPrintFlag = 0;
int prevPrintFlag = 0;
int weekSize = 0;
int id = 0;
int memoryFlag = 0;
int daySize = 0;
void freeNode(struct LinkedList **first);

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
#include "led.c"


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
      greenhouse();
    }
  }
}




