#include "at91sam3x8.h"
#include "system_sam3x.h"
void waitForBack();
void startDate();
void startMeasure();
void measureFunc();
void startData();
void weekPosition();
void clearNext();
void clearPrev();
void setAlarm();

void startDate()
{
  if(readyDate == 0)
   printDate(year, month,day,204,1);
  while(1)
   { 
     waitForDate();//wait for user input
      if(readInput(dateSet)==1)//validate
        {
          printPos("Date successfully loaded!",180,0 );
          printDate(year, month,day,204,1);
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
    printDate(year, month,day,204,1);
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
      avg = totTemp / daySize;
      printDataFlag = 1;
      measureFlag = 0;
      /*if(memoryFlag == 1)
      {
        freeNode(listTemprature);
        size--;
      }*/
      if(temprature >= maxAlarm)
      {
        printPos("TOO HOT!", 164 ,1 );
        alarmFlag = 1;
      }
      else if(temprature <= minAlarm)
      {
        printPos("TOO COLD!" ,164, 1);
        alarmFlag = 1;
      }
      if(alarmFlag == 1 && temprature <= maxAlarm && temprature >= minAlarm )
      {
        printPos("         ",164,1);
        alarmFlag = 0;
      }   
}
void startData()
{
  clearDisplay();
  printData();
  printBack();
  if(weekSize > 0)
    printPos("[7] prev day",104,1);
  while(tmpKey != 10)//wait for a back command
  {
    if(measureFlag == 1)
    {
      measureFunc();
    }
    if(prevPrintFlag == 0 && weekSize ==1)
    {
      printPos("[7] prev day",104,1); 
      prevPrintFlag = 0;
    }
    if(printDataFlag == 1)
    {    
        if(maxTempFlag)
        {
          printTemprature(maxTemp,76,0);
          printTime(maxStamp, 136, 0);
          maxTempFlag = 0;
        }
        else if(minTempFlag)
        {
          printTemprature(minTemp,196,0);
          printTime(minStamp,0,1);
          minTempFlag = 0;
        }        
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
  printDate(year, month,day,204,1);
  printStartMenu();
}
void weekPosition()//calculate which screen we are on
{
  buttonUp();
  posDay = weekSize-1;
   printPos("                                            ",10,0);
  printOldData(WeekTemprature,posDay);
  printPos("[9] next day",122,1);
 
  if(weekSize == 1)
    clearPrev(); 
  while(1)
  {
    tmpKey = keypad();
    delay(150);
    if(measureFlag == 1)
      measureFunc();
    
     if(tmpKey == 9 )
     {
        posDay++;
        if(posDay == weekSize)
          break;
        printOldData(WeekTemprature, posDay);
        printPos("[7] prev day",104,1);
        buttonUp();
     }
     else if(tmpKey == 7 && posDay != 0)
     {
       posDay--;
       if(posDay == 0)
         clearPrev();
       else 
         printPos("[7] prev day",104,1);
       
       printPos("[9] next day",122,1);
       printOldData(WeekTemprature, posDay);
       buttonUp();
     }
     tmpKey = -1;
  }
  printData();
  printPos("[7] prev day",104,1);
}
void setAlarm()
{
  clearDisplay();
  printDate(year, month, day, 204,1);
  printBack();
  int i = 0;
  printPos("-------SET ALARM-------",3,0);
  printPos("[1] Set max temprature: ",60,0);
  printPos("[2] Set min temprature: ",120,0);
  printPos("Current max: ", 180, 0);
  printPosChar(maxAlarm/10 + 48,193,0);
  printPosChar(maxAlarm%10 + 48, 194,0);
  printPos("Current min: ", 240, 0);
  printPosChar(minAlarm/10 + 48,253,0);
  printPosChar(minAlarm%10 + 48, 254,0);
  
  while(tmpKey != 10)
  {
    tmpKey = keypad();
    if(tmpKey == 1)
    {
      buttonUp();
      i = 0;
      while(i != 2)
      {
        clearBack();
        tmpKey = keypad();
        if(tmpKey == 11)
           tmpKey = 0;
        if(i == 0 && isPressed )
        {
          maxAlarm = 10 * tmpKey;
          printPosChar(tmpKey + 48,84,0); 
          buttonUp();
          i++;
        }
        else if(i==1 && isPressed)
        {
          maxAlarm += tmpKey;
          printPosChar(tmpKey + 48,85,0);
          buttonUp();
          i++;
        }        
      }
      printBack();
    }
    
    if(tmpKey == 2)
    {
      i = 0;
      buttonUp();
      while(i != 2)
      { 
        clearBack();
        tmpKey = keypad();
        if(tmpKey == 11)
           tmpKey = 0;
        if(i == 0 && isPressed)
        {
          minAlarm = 10 * tmpKey;
          printPosChar(tmpKey + 48,144,0);
          buttonUp();
          i++;
        }
        else if(i==1 && isPressed)
        {
          minAlarm += tmpKey;
          printPosChar(tmpKey + 48,145,0);
          buttonUp();
          i++;
        }      
      }
      printBack();
    }
  }
  clearDisplay();
  printStartMenu();
  tmpKey = 0;
}
void greenhouse()
{
  light = calcLight();
    if(hour >= 4 && hour < 20)
    {
      rotateServo(18);
      if(light > 0.7)
      {
        setLed(1); 
      }
      else
        setLed(0);
    }
    else
    {
       rotateServo(9);
       setLed(0);
    }
}

void clearPrev()
{
  printPos("            ",104,1);
}
void clearNext()
{
  printPos("            ",122,1);
}
void waitForBack()
{
  while(!(keypad() == 10)){keypad();};
  printStartMenu();
}