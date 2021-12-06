#include <stdio.h>
#include "at91sam3x8.h"
#include "system_sam3x.h"

int readTime(char str[]);
int calcTime(int hour, int minute, int second);
int validateTime(int hour, int minute, int second);
void waitForTime();
char timeSet [6];
int sec;
void printTime();


int readTime(char str[]){
  int hour = (int)((str[0]-48)*10 + (str[1]-48));
  int minute = (int)((str[2]-48)*10 + (str[3]-48));
  int second = (int)((str[4]-48)*10 + (str[5]-48));

  int validate = validateTime(hour, minute, second);
  sec = calcTime(hour, minute, second);
  if(validate == 1)
    flagTime = 1;
  else
    flagTime = 0;
  return validate;
}
int calcTime(int hour, int minute, int second){
  return hour*60*60 + minute*60 + second;
}
int validateTime(int hour, int minute, int second){

if(hour > 23 || hour < 0 || minute > 60 || minute < 0 || second > 60 || second < 0)
  return 0;
return 1;

}
void printTime(int sec, int x, int y)
{
  int hour = (sec /3600)%24;
  if(sec%86400 == 0)
  {
    calcDate(year, month, day);
    hour = 0;
  }
  
  if(sec%59 == 0 & measureFlag == 0)
  {
    measureFlag = 1;
  }
  int minute = (sec / 60)%60;

  int dispSec = sec % 60;
  
  int tenthHour = hour/10; 
  int singleHour = hour%10;
  
  int tenthMinute = minute/10; 
  int singleMinute = minute%10;
  
  int tenthSecond = dispSec/10; 
  int singleSecond = dispSec%10;
  
  char time [] = {tenthHour+48,singleHour+48,':',tenthMinute+48,singleMinute+48,':',tenthSecond+48,singleSecond+48};
  printPos(time, x,y);
  
}
void waitForTime(){
  while(!(isPressed)){tmpKey = keypad();}
     clearDisplay();
    if(readyDate == 0)
      printDate();
    printTimeMenu();
    int i = 0;
    wait(500);
    isPressed = 0;
    while(i != 6)
    {
        buttonUp();
        timeSet[i] = tmpKey+48;
        printPosChar(timeSet[i],120+i,0);
        i++;
        isPressed = 0;
        keyStatus =1;
    }
 wait(500);
 tmpKey = -1;
}