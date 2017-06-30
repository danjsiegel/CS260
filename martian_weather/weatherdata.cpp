#include <iostream>
#include "weatherdata.h"

int const WeatherData::returnTimestamp(){
  return timestamp;
}
void WeatherData::addWeatherData(int newtimestamp, double newtemperature, double newwindspeed){
  timestamp = newtimestamp;
  temperature = newtemperature;
  windspeed = newwindspeed;
}
