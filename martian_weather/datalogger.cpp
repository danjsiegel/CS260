#include <iostream>
#include "datalogger.h"
#include "linkedlist.h"
#include "weatherdata.h"

using namespace std;

Datalogger::Datalogger(){
  Linked list;
}
void Datalogger::addData(int timestamp, double temperature, double windspeed){
  bool timeStampExists = false;
  list.checkTimeStamp(timeStampExists, timestamp);
  if (timeStampExists == false){
    list.insert();
    countOfData++;
  }

}
void Datalogger::printReport(){}
Datalogger::~Datalogger(){}
