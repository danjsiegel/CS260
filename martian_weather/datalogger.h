#ifndef DATALOGGER_H
#define  DATALOGGER_H

class Datalogger{
  public:
    Datalogger(){};
    ~Datalogger(){};
    void addData(int timestamp, double temperature, double windspeed);
    void printReport();
  private:

};


#endif
