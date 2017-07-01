#include <iostream>
#include "datalogger.h"
#include "linkedlist.h"
#include "weatherdata.h"

using namespace std;

datalogger::datalogger(){
	countOfData = 0;
}
void datalogger::addData(int timestamp, double temperature, double windspeed){
  bool timeStampExists = false;
  list.checkTimeStamp(timeStampExists, timestamp);
  if (timeStampExists == false){
    list.insert(timestamp, temperature, windspeed);
    countOfData++;
  }
}
void datalogger::printReport(){
	list.printByTimestamp();
}
datalogger::~datalogger(){}
