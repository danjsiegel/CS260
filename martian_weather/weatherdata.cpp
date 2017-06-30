#include <iostream>
#include "weatherdata.h"

int const weatherdata::returnTimestamp(){
  return timestamp;
}
void weatherdata::addWeatherData(int newtimestamp, double newtemperature, double newwindspeed){
  timestamp = newtimestamp;
  temperature = newtemperature;
  windspeed = newwindspeed;
}
