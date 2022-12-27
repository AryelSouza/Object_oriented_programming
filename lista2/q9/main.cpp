#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

    Pessoa p1("Aryel", "123456789");
    p1.imprimir();
    p1.CPFValido();
    p1.setNome("Aryel II");
    p1.setCpf("1232222245678911");
    p1.imprimir();
    p1.CPFValido();
    return 0;
}