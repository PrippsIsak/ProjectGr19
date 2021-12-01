#include <stdio.h>
#include "at91sam3x8.h"
#include "system_sam3x.h"

int readInput(char str[]);
int validateDate(int year, int month, int day);
int checkLeap(int year);



// usuing ascii '0' = 48 therefore we substract 48 from the char to get a number.
//  if a user write # or * the valid date will take care of it.
int readInput(char str[]){

  int year = (int)((str[0]-48)*10 + (str[1]-48)); 
  int month = (int)((str[2]-48)*10 + (str[3]-48));
  int day = (int)((str[4]-48)*10 + (str[5]-48));

  //int leap = checkLeap(year);
  int validate = validateDate(year, month, day);
  
  return validate;

  //printf("%d, %d, %d, Valid: %d", year, month, day, validate);
}
int validateDate(int year, int month, int day){
  // filter for all dates
    if(month > 12 || month < 1 || day < 1)
      return 0;
    //check for 31 day months
    if((month == 1 || month == 3 ||month == 5 ||month == 7 || month == 8 || month == 10 || month == 12)){
        if(day > 31)
          return 0;
    }
    //cehck for 30 day months
    if((month == 4 || month == 6 || month == 9 || month == 11)){
      if(day > 30)
        return 0;
    }
    //february :(
    if(month == 2 && day == 29 )
      return checkLeap(year*100);
    else{
      if(day > 28)
        return 0;
    }
    return 1;
}

int checkLeap(int year){
  if(year % 400 == 0)
    return 1;

  if(year % 100 == 0)
    return 0;

  if(year % 4 == 0)
    return 1;

  return 0;
}