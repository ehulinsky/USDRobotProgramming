/*
  Test Feedback Connections.c;

  Load to ActivityBot EEPROM. PWR to Position 2.;
  Gently turn each wheel by hand.  Right wheel;
  blinks P27 LED, left wheel blinks P26 LED.;

  http://learn.parallax.com/activitybot/test-feedback-360-servos;
*/

                                                                             //
#include "simpletools.h"                      // Library - simpletools;
#include "abdrive360.h"                       // Library - abdrive360;
#include "abcalibrate360.h"
#include "ping.h"

int turn;

int main()                                    // Main function;
{
  while(1==1)
  {
  drive_speed(64,64);
  while(ping_cm(8) >=15);
  drive_speed(0,0);
  
  turn=rand()%2;
  if(turn==1)
  {
    drive_speed(64,-64);
  }
  else
  {
    drive_speed(-64,64);
  }  
  
  while(ping_cm(8) < 20);
  
  drive_speed(0,0);
}  
}
