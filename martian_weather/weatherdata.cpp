#include <iostream>
#include "weatherdata.h"

using namespace std;

int const WeatherData::returnTimestamp(){
	return timestamp;
}
int const WeatherData::returnTemp(){
	return temperature;
}
void WeatherData::addWeatherData(int newtimestamp, double newtemperature, double newwindspeed){
	timestamp = newtimestamp;
	temperature = (newtemperature/10);
	windspeed = (newwindspeed/10);
}
void WeatherData::printData(){
	cout << "Timestamp: " << timestamp << endl;
	cout << "Temperature: " << temperature << " C" << endl;
	cout << "Windspeed: " << windspeed << " m/s" << endl;
}
