#include "at91sam3x8.h"
#include "system_sam3x.h"
void waitForBack();
void startDate();
void startMeasure();
void measureFunc();
void startData();
void weekPosition();
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
        flagTime = 1;
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
      writeTempWhenReady();
      insertLast(&listTemprature,readSensor(sec));
      totTemp += temprature;
      printDataFlag = 1;
      measureFlag = 0;
}
void startData()
{

  clearDisplay();
  printData();
  printBack();
  while(tmpKey != 10){//wait for a back command
    if(measureFlag == 1)
    {
      measureFunc();
    }
    if(printDataFlag == 1)
    {    
        if(maxTempFlag)
        {
          printTemprature(maxTemp,76,0);
          printTime(sec, 136, 0);
          maxTempFlag = 0;
        }
        else if(minTempFlag)
        {
          printTemprature(minTemp,196,0);
          printTime(sec,0,1);
          minTempFlag = 0;
        }        
        avg = totTemp / size;
      printTemprature(avg,60,1);
    }
    if(tmpKey == 7 && weekSize > 0)
    {
          weekPosition();
          tmpKey = 0;
     }
    tmpKey = keypad();
  }
  tmpKey = 0;
  clearDisplay();
  printDate();
  printStartMenu();
}
void weekPosition()//calculate which screen we are on
{
  tmpKey = 0;
  printOldData(WeekTemprature,posDay);
  posDay = weekSize-1;
  printPosChar(posDay+48,0,0);
  
  while(1)
  {
    tmpKey = keypad();
    if(measureFlag == 1)
    {
      measureFunc();
    }
    if(weekSize == posDay)
      break;
    
     else if(tmpKey == 9 )
     {
        posDay++;
        printOldData(WeekTemprature, posDay);
        printPosChar(posDay+48,0,0);
        buttonUp();
     }
     else if(tmpKey == 7 && posDay != 0)
     {
       posDay--;
       printOldData(WeekTemprature, posDay);
       printPosChar(posDay+48,0,0);
       buttonUp();
     }
     tmpKey = -1;
  }
  printData();
}

void waitForBack()
{
  while(!(keypad() == 10)){keypad();};
  printStartMenu();
}