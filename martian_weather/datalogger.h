#ifndef DATALOGGER_H
#define  DATALOGGER_H
#include "linkedlist.h"

class Datalogger{
  public:
    Datalogger(){};
    ~Datalogger(){};
    void addData(int timestamp, double temperature, double windspeed);
    void printReport();
  private:
    int countOfData;
};


#endif
