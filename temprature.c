#include "at91sam3x8.h"
#include "system_sam3x.h"
#include "pins.c"

void initTemprature();
void resetTemprature();
void tempMeasure();


void TCO_Handler(void);
void SysTick_Handler(void);

float calcTemp();
unsigned int fallingCheck = 0;
void clearDisplay();

float writeTempWhenReady(){
  while(1){
    if(tFlag2){
      tFlag2=0;
      tempMeasure();
    }else{
      
    if(flag == 1) //when it has read a temp
    {
      temprature = calcTemp();
      flag=0;
      tFlag2=1;
      return temprature;
    }}
  }
}
void initTemprature()
{
  //SysTick_Config(SystemCoreClock*0.001); //Slow down the clock
  
  *AT91C_PMC_PCER = (1<<27);
  *AT91C_PMC_PCER = (1<<12);
  
  *AT91C_TC0_CCR = 0x5;//enbale, could write (1<<0)
  *AT91C_TC0_CMR = (*AT91C_TC0_CMR & 0xfff8)|AT91C_TC_LDRA_FALLING| AT91C_TC_LDRB_RISING; //from datasheet and psuedocode
  
  *AT91C_PIOB_PER = pin2;
  *AT91C_PIOB_OER = pin2; //enable outputs
  resetTemprature();
  
  NVIC_ClearPendingIRQ(TC0_IRQn);
  NVIC_SetPriority(TC0_IRQn, 1);
  NVIC_EnableIRQ(TC0_IRQn);
  
  *AT91C_TC0_SR;

}
void resetTemprature(){
  *AT91C_PIOB_SODR = pin2; //enable outputs
  *AT91C_PIOB_CODR = pin2; //creating the pulse, by enable and disable temp
  tFlag1 =1;
  
  while(tFlag1);
  *AT91C_PIOB_SODR = pin2;
  
}
void printTemprature(float temp, int x, int y)
{
  char tempArray [4] = {48, 48, 48, 48};
  int tenthTemp = (int)temp/10;
  int singleTemp = (int)temp%10;
  int decimalTemp = (int)(temp*10)%10;
  
  tempArray[0] = tenthTemp+48;
  tempArray[1] = singleTemp+48;
  tempArray[2] = ',';
  tempArray[3] = decimalTemp+48;
  
  printPos(tempArray,x,y);
  
}
void tempMeasure()
{
  *AT91C_PIOB_OER = pin2; //enable outputs
  resetTemprature();
  *AT91C_PIOB_CODR = pin2; //creating the pulse, by enable and disable temp
  delay(25);
  *AT91C_PIOB_SODR = pin2;
  *AT91C_PIOB_ODR = pin2; //enable outputs  
  *AT91C_TC0_CCR = AT91C_TC_SWTRG; //RESET,(1<<2)
  *AT91C_TC0_SR; //copying same logic from lab1, read and clear "clear old by interrupt by read statusreg"
  *AT91C_TC0_IER = AT91C_TC_LDRBS; //to check if it is on a rising, "interrupt triggered on risinf edge"
}
void TC0_Handler(void)
{
  *AT91C_TC0_IDR =  AT91C_TC_LDRBS; //from lab 1
  *AT91C_TC0_SR;
  flag = 1;
}

float calcTemp()
{
  int ra = *AT91C_TC0_RA;
  int rb = *AT91C_TC0_RB;
  
  float time = (float)(rb-ra);
  checkTemp = (time/210)-273.15; // 210 = 5 * 42
  flag=0;
  return checkTemp; //waveform = 0, read only, reading register a and b
}