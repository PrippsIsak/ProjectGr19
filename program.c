#include "at91sam3x8.h"
#include "system_sam3x.h"
void waitForBack();
void startDate();
int readyDate = -1;

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
void waitForBack()
{
  while(!(keypad() == 10)){};
  printStartMenu();
}