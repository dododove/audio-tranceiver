#include <RF24.h>
#include <SPI.h>
#include <RF24Audio.h>

RF24 radio(7,8);
RF24Audio Sound(radio,0);

void setup() 
  {
  radio.begin();
  radio.setChannel(125);
  radio.setDataRate(RF24_250KBPS);
  Sound.begin();
  Sound.receive(); 
  }
  
void loop() {}
