#include <MemoryFree.h>

//#include "DigitalIO.h"
#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"
#include "printf.h"
#include "LCD_Functions.h"
#include <stdlib.h>

RF24 radio(9, 10);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  //Serial1.begin(9600);
  
  SPI.begin();
  SPI.setDataMode(SPI_MODE0);
  SPI.setBitOrder(MSBFIRST);
  SPI.setClockDivider(SPI_CLOCK_DIV4);
  RF_Setup();
  LCD_Setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  LCD_Loop();
  RF_Loop();
}
