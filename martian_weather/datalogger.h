#ifndef DATALOGGER_H
#define  DATALOGGER_H
#include "linkedlist.h"

class datalogger{
  public:
    datalogger();
    ~datalogger();
    void addData(int timestamp, double temperature, double windspeed);
    void printReport();
  private:
    int countOfData;
  	Linked list;
};


#endif
