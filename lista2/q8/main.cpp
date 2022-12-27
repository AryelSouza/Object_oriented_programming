#include "Retangulo.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Retangulo r1(4, 40);
    Retangulo r2(3.5, 35.9);
    cout << "Retangulo 1" << endl;
    r1.imprimir();
    cout << "Retangulo 2" << endl;
    r2.imprimir();
}
