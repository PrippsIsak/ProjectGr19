#include "at91sam3x8.h"
#include "system_sam3x.h"
#include "head.h"

// Read functions
void initEverything();

int readKey;
float readLight;

int main()
{
  initEverything();
    Write_Data_2_Display(0);
    Write_Data_2_Display(0);
    Write_Command_2_Display(0x24);
    printStartMenu();
    int key;
    
    while(1)
     { 
       if(readyDate == 1)
       {
         printDate();
         readyDate = 0;
       }
       key = keypad();
       if(key==1)
         startDate();
       if(key == 2)
         startTime();
     }
  return 0;
}

void initEverything(){
    SystemInit();

    
    // Display
    initDisplay();
    dispGraphics();
    clearDisplay();
    
    // Keypad
    initKeypad();
    keypad();
    
    // Servo
//    initServo();
    
    // Light
//    initLight();
    
    // Temprature
    SysTick_Config(SystemCoreClock*0.001); //Slow down the clock
    initTemprature();
}



