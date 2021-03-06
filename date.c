#include <stdio.h>
#include "at91sam3x8.h"
#include "system_sam3x.h"

int readInput(char str[]);
int validateDate(int year, int month, int day);
int checkLeap(int year);

void waitForDate();
char dateSet [8];


// usuing ascii '0' = 48 therefore we substract 48 from the char to get a number.
//  if a user write # or * the valid date will take care of it.
int readInput(char str[])
{
  for(int i = 0; i<8;i++)
  {
    if(str[i]-48 > 9)
      return 0;
  }
  year = (int)((str[0]-48)*1000 + (str[1]-48)*100 + (str[2]-48)*10 + (str[3]-48)); 
  month = (int)((str[4]-48)*10 + (str[5]-48));
  day = (int)((str[6]-48)*10 + (str[7]-48));

  //int leap = checkLeap(year);
  int validate = validateDate(year, month, day);
  
  return validate;
}
int validateDate(int year, int month, int day)
{
  // filter for all dates
    if(month > 12 || month < 1 || day < 1 || year < 0)
      return 0;
    //check for 31 day months
   else if((month == 1 || month == 3 ||month == 5 ||month == 7 || month == 8 || month == 10 || month == 12))
   {
        if(day > 31)
          return 0;
    }
    //cehck for 30 day months
    else if((month == 4 || month == 6 || month == 9 || month == 11))
    {
        if(day > 30)
          return 0;
    }
    //february :(
    else if(month == 2 && day == 29 )
    {
      return checkLeap(year);

    }
    if(day > 28)
    {  
      return 0;
    }
    return 1;
}

int checkLeap(int year)
{
  if(year % 400 == 0)
    return 1;

  if(year % 100 == 0)
    return 0;

  if(year % 4 == 0)
    return 1;

  return 0;
}

void calcDate(int currentYear, int currentMonth, int currentDay)
{
  weekInsertLast(&WeekTemprature, saveDay());
  id++;
  dateFlag = 0;
  if((currentDay == 31) && (month == 1 || month == 3 ||month == 5 ||month == 7 || month == 8 || month == 10 || month == 12))
  {
    day = 1;
    if(currentMonth == 12)
    {
      month = 1;
      year++;
    }
    else
      month++;
  }
  else if((currentDay == 30) && (month == 4 ||month == 6 || month == 9 || month == 11))
  {
    month++;
    day = 1;
  }
  else if(currentDay == 28 && currentMonth == 2)
  {
    if(checkLeap(currentYear) == 1)
      day = 29;
    else
    {
      day = 1;
    month = 3;
    }
  }
  else if(currentDay == 29 && currentMonth ==2)
  {
    day = 1;
    month = 3;
  }
  else 
    day++;
  printDate(year,month,day,204,1);
}

void printDate(int year, int month, int day, int x, int y)
{
  int thousandYear = year/1000;
  int hundredYear = (year/100)%10;
  int tenthYear = (year/10)%10;
  int dispYear = year%10;
  
  int tenthMonth = month/10;
  int dispMonth = month%10;
  
  int tenthDay = day/10;
  int dispDay = day%10;
    
  char date [10] = {thousandYear+48,hundredYear+48,tenthYear+48,dispYear+48,'/',tenthMonth+48,dispMonth+48,'/',tenthDay+48,dispDay+48};
  
  printPos(date, x, y);
}

void waitForDate(){
  while(!(isPressed)){tmpKey = keypad();}  
  
    clearDisplay();
  
    if(readyDate == 0)// to allways print the date whereever we are if date has been set
       printDate(year, month,day,204,1);
    
    printDateMenu();
    int i = 0;
    buttonUp();
    while(i != 8)
    {
        buttonUp(); 
        dateSet[i] = tmpKey+48;
        printPosChar(dateSet[i],120+i,0);
        i++;
        isPressed = 0;
        keyStatus =1;
    }
 wait(500);
 tmpKey = -1;
}