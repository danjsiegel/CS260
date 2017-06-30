#include <iostream>
#include <cstring>
#include "linkedlist.h"
#include "weatherdata.h"

void linkedlist::checkTimeStamp(bool &found, int timestampToCheck){
  current = timeHead;
  previous = timeHead;
  int tempTemp = timeHead->data.returnTimestamp();
  if (timeHead == timestampToCheck){
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

void linkedlist::timeInsert(){
  current=head;
  previous=head;
  int tempTime = temp->data.returnTimestamp();
  int currentTime;
  if (head == NULL){
    temp = head;
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
void linkedlist::insert(int timestamp, double temperature, double windspeed){
  temp = new Node;
  temp->data.addWeatherData(timestamp, temperature, windspeed);
  //timeInsert();
//  tempInsert();
//  windInsert();
}
