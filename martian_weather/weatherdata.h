#ifndef WEATHER_D
#define WEATHER_D

class WeatherData{
private:
	int timestamp;
	double temperature;
	double windspeed;
public:
	int const returnTimestamp();
	void addWeatherData(int newtimestamp, double newtemperature, double newwindspeed);
	int const returnTemp();
	void printData();
};

#endif
