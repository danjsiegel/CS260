#include <iostream>
#include "datalogger.h"
#include "linkedlist.h"
#include "weatherdata.h"

using namespace std;

Datalogger::Datalogger(){
  Linked list;
}
void Datalogger::addData(int timestamp, double temperature, double windspeed){
  bool timeStampExists;
  list.checkTimeStamp(timeStampExists, timestamp);
  if (timeStampExists == false){
    list.//function to add data//will call 3 functions to insert
    countOfData++;
  }

}
void Datalogger::printReport(){}
Datalogger::~Datalogger(){}
