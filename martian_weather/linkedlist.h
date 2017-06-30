#ifndef LINKED_L
#define LINKED_L
#include "weatherdata.h"

class Linked {
  private:
    struct Node{
      WeatherData data;
      Node *nextTimestamp;
      Node *nextTemperature;
      Node *nextWindspeed;
    };
    Node *timeHead;
    Node *tempHead;
    Node *windHead;
    Node *current;
    Node *previous;
    Node *temp;
  public:
    void checkTimeStamp(bool &found, int timestampToCheck);
    void timeInsert();
    void insert(int timestamp, double temperature, double windspeed);
};
#endif
