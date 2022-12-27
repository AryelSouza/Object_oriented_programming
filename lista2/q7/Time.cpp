#include "Time.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

Time::Time(){
    time_t t = time(0);
    tm *now = localtime(&t);
    hour = now->tm_hour;
    minute = now->tm_min;
    second = now->tm_sec;
}

Time::Time(int hour, int minute, int second){
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

void Time::setHour(int hour){
    this->hour = hour;
}

void Time::setMinute(int minute){
    this->minute = minute;
}

void Time::setSecond(int second){
    this->second = second;
}

int Time::getHour(){
    return hour;
}

int Time::getMinute(){
    return minute;
}

int Time::getSecond(){
    return second;
}

void Time::setTime(int hour, int minute, int second){
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

void Time::imprimir(){
    cout << "Hour: " << hour << endl;
    cout << "Minute: " << minute << endl;
    cout << "Second: " << second << endl;
}
