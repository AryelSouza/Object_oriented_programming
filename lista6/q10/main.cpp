#include "Conta.hpp"
#include "ContaCorrenteComun.hpp"
#include "ContaCorrenteLimite.hpp"
#include "ContaPoupanca.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
    ContaCorrenteComun c1("Joao", 1, 1000);
    ContaCorrenteLimite c2("Maria", 2, 1000, 1000);
    ContaPoupanca c3("Jose", 3, 1000, 10,4,2015);
    //array de ponteiros para Conta
    Conta *contas[3];
    contas[0] = &c1;
    contas[1] = &c2;
    contas[2] = &c3;
    //debita 1000 de cada conta
    for (int i = 0; i < 3; i++) {
        contas[i]->debitar(1000);
    }
    //credita 1000 de cada conta
    for (int i = 0; i < 3; i++) {
        contas[i]->creditar(1000);
    }
    //extrato de cada conta
    for (int i = 0; i < 3; i++) {
        contas[i]->extrato();
    }
    return 0;
}