#include "Array.hpp"
#include <iostream>
using namespace std;

int main(){
    Array<int> array(10);
    for(int i = 0; i < array.getSize(); i++){
        array.set(i, i);
    }
    for(int i = 0; i < array.getSize(); i++){
        cout << array.get(i) << endl;
    }
    return 0;
}