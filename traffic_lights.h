/***
* 
* traffic_lights.h
* Author: Cobraxo
* Date: 10/15/2019
* 
***/

#ifndef TRAFFIC_LIGHTS
#define TRAFFIC_LIGHTS


// TIME = 60 000ms = 60s = 1min
#define TIME 20000

// Define pin
#define  GREEN 12
#define  ORANGE 11
#define  RED 10

enum light {

  green_light  = GREEN,
  orange_light  = ORANGE,
  red_light  = RED
  
};

class State {

  public:
    State(light Initial_State, long int m_time_transition);
    light getState() const;
    void Wait() const;
    void nextState();
    
  private:
    long int m_time;
    light m_current_state;

};

class Traffic {

  public:
    Traffic(long int time_transition);
    void Run() const;

  private:
    long int m_time_transition;
  
};

#endif
