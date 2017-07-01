#include <iostream>
#include <cstring>
#include "linkedlist.h"
#include "weatherdata.h"

using namespace std;

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
  int currentTime = timeHead->data.returnTimestamp();
  if (timeHead == NULL){
    temp = timeHead;
    return;
  } else if(tempTime < currentTime){
	temp->nextTimestamp = timeHead;
	timeHead = temp;
  }	else {
    while (current->nextTimestamp != NULL){
      previous = current;
      current = current->nextTimestamp;
      currentTime = current->data.returnTimestamp();
      if (tempTime < currentTime){
        previous->nextTimestamp = temp;
        temp->nextTimestamp = current;
        return;
      }
    }
    if (current->nextTimestamp == NULL){
      current->nextTimestamp = temp;
      temp->nextTimestamp = NULL;
    }
  }

}
void Linked::tempInsert(){
  current=tempHead;
  previous=tempHead;
  int tempTemp = temp->data.returnTemp();
  int currentTemp = timeHead->data.returnTemp();
  if (tempHead == NULL){
    temp = tempHead;
    return;
  } else if(tempTemp > currentTemp){
	temp->nextTemperature = tempHead;
	tempHead = temp;
  }	else {
    while (current->nextTemperature != NULL){
      previous = current;
      current = current->nextTemperature;
      currentTemp = current->data.returnTemp();
      if (tempTemp > currentTemp){
        previous->nextTemperature = temp;
        temp->nextTemperature = current;
        return;
      }
    }
    if (current->nextTemperature == NULL){
      current->nextTemperature = temp;
      temp->nextTemperature = NULL;
    }
  }

}
void Linked::insert(int timestamp, double temperature, double windspeed){
  temp = new Node;
  temp->data.addWeatherData(timestamp, temperature, windspeed);
  timeInsert();
  tempInsert();
 // windInsert();
}

void Linked::printByTimestamp(){
	current = tempHead;
	while (current != NULL){
	current->data.printData();
	current = current->nextTemperature;
	}
}
