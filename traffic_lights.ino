/***
* 
* traffic_lights.ino
* Author: Cobraxo
* Date: 10/15/2019
* 
***/

#include "traffic_lights.h"


State::State(light Initial_State = green_light, long int m_time_transition = 0) 
: m_current_state(Initial_State), m_time(m_time_transition)
{
}

light State::getState() const {

  return m_current_state;
  
}

void State::Wait() const {

  delay(m_time);
  
}

void State::nextState() {

  switch(m_current_state) {

    // Next state is orange
    case green_light:
      m_current_state = orange_light;
      break;

    // Next state is red
    case orange_light:
      m_current_state = red_light;
      break;

    // Next state green
    case red_light:
      m_current_state = green_light;
      break;
    
  }
  
}


Traffic::Traffic(long int time_transition = 0) : m_time_transition(time_transition)
{ 
}

void Traffic::Run() const{

  State state(green_light, m_time_transition);

  // Inifinity loop
  while (true) {
    
    // Turn on the light
    digitalWrite(state.getState(), HIGH);

    state.Wait();
    
    // Turn off the light
    digitalWrite(state.getState(), LOW);
    state.nextState();

  }
    
}
