#include <iostream>
#include <cstring>
#include "linkedlist.h"
#include "weatherdata.h"

void Linked::checkTimeStamp(bool &found, int timestampToCheck){
  current = timeHead;
  previous = timeHead;
  int tempTemp = timeHead->data.returnTimestamp();
  if (tempTemp == timestampToCheck){
    found = true;
    return;
  }
  while (current->nextTimestamp != NULL && tempTemp != timestampToCheck){
    previous = current;
    current = current->nextTimestamp;
    tempTemp = current->data.returnTimestamp();
    if (tempTemp == timestampToCheck){
      found = true;
      return;
    }
  }
}

void Linked::timeInsert(){
  current=timeHead;
  previous=timeHead;
  int tempTime = temp->data.returnTimestamp();
  int currentTime;
  if (timeHead == NULL){
    temp = timeHead;
    return;
  } else {
    while current->nextTimestamp != NULL){
      previous = current;
      current = current->nextTimestamp;
      currentTime = current->data.returnTimestamp();
      if (tempTime > currentTime){
        previous->nextTimestamp = temp;
        temp->nextTimestamp = current;
        return;
      }
    }
    if current->nextTimestamp == NULL){
      current->nextTimestamp = temp;
      temp->nextTimestamp = NULL;
    }
  }

}
void Linked::insert(int timestamp, double temperature, double windspeed){
  temp = new Node;
  temp->data.addWeatherData(timestamp, temperature, windspeed);
  //timeInsert();
//  tempInsert();
//  windInsert();
}
