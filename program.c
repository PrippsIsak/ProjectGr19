#include "at91sam3x8.h"
#include "system_sam3x.h"
void waitForBack();
void startDate();
void startMeasure();
void measureFunc();
void startData();

void startDate()
{
  if(readyDate == 0)
    printDate();
  while(1)
   { 
     waitForDate();//wait for user input
      if(readInput(dateSet)==1)//validate
        {
          printPos("Date successfully loaded!",180,0 );
          printDate();
          break;
        }
        clearDisplay();
        printDateMenu();
        printPos("Invalid date, try again ",180 ,0 );
     }
     waitForBack();
     readyDate = 1;
}
void startTime()
{
  if(readyDate==0)
    printDate();
  while(1)
  {
   waitForTime();//wait for user inputs
      if(readTime(timeSet)==1)//validate
      {
        printPos("Time successfully loaded!",180,0 );
        break;
       }
      clearDisplay();
      printTimeMenu();
      printPos("Invalid time, try again ",180 ,0 );  
     }
  waitForBack();
  readyDate = 1;
}
void startMeasure()
{
  clearDisplay();
  printTempMenu();
  tmpKey = keypad();
  while(tmpKey != 1){tmpKey = keypad();}
  buttonUp();
  if(readyDate > -1 & flagTime == 1)
  {
    measureFlag = 1;
    printPos("measure has started",120,0);
  }
  else
    printPos("Time and date is not set", 120,0);
  waitForBack();
}
void measureFunc()
{  
   if(sec%60 == 0 && measureFlag == 1)
    {
      writeTempWhenReady();
      insertLast(&listTemprature,readSensor(sec));
      totTemp += temprature;
      printDataFlag = 1;
      measureFlag = 0;
      
    }
}
void startData()
{
  clearDisplay();
  printData();
  printBack();
  while(tmpKey != 10){
    measureFunc();
    if(printDataFlag == 1){
      
      printTemprature(findMax(listTemprature),79,0);
      delay(100);
      printTemprature(findMin(listTemprature),199,0);
      
      float avg = totTemp/(float)size;
      delay(100);
      printTemprature(avg,143,0);
      delay(100);
      printPos("Time stamp: ", 240, 0);
      delay(100);
      printTime(maxStamp, 252, 0);
      delay(100);
      printTime(minStamp,44,1);
      delay(100);
      printDataFlag = 0;
    }
    tmpKey = keypad();
  }
  tmpKey = 0;
  clearDisplay();
  printDate();
  printStartMenu();
}
void waitForBack()
{
  while(!(keypad() == 10)){};
  printStartMenu();
}