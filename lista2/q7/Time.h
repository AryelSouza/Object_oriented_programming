#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Time{
public:
    Time();
    Time(int hour, int minute, int second);
    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);
    int getHour();
    int getMinute();
    int getSecond();
    void setTime(int hour, int minute, int second);
    void imprimir();
private:
    int hour;
    int minute;
    int second;
};

#endif