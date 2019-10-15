/***
* 
* main.ino 
* Author: Cobraxo
* Date: 10/15/2019
* Project: traffic ligths 
* 
* Goal:
* I've programmed this to test my knowledge 
* about Finite State Machine
* 
***/

#include "traffic_lights.h"


void setup() {

  pinMode(GREEN, OUTPUT);
  pinMode(ORANGE, OUTPUT);
  pinMode(RED, OUTPUT);
  
}

void loop() {

  Traffic lights(TIME);
  lights.Run();

}
