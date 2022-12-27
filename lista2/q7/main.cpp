#include "Time.h"
#include <iostream>
#include <string>
#include <ctime>


using namespace std;

int main(){
    Time t1;
    cout<<"Current time"<<endl;
    t1.imprimir();
    Time t2(10, 20, 30);
    cout<<"Time 2"<<endl;
    t2.imprimir();
    t2.setTime(11, 22, 33);
    cout<<"Time 2 updated"<<endl;
    t2.imprimir();
}
