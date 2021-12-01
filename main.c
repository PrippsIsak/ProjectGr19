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
    
    while(1)
     {
      waitFor6Inputs();
      if(readInput(inputs)==1)
        //print new screen
      {
        printPos("Date successfully loaded!",180,0 );
        break;
      }
      clearDisplay();
      printDateMenu();
      printPos("Invalid date, try again ",180 ,0 );
     }
      while(1){}
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



