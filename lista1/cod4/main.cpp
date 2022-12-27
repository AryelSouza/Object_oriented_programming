#include "Dia.h"
#include <iostream>
#include <string>
using namespace std;


int main(){

int dia, mes, ano;
cout << "Digite o dia: ";
cin >> dia;
cout << "Digite o mês: ";
cin >> mes;
cout << "Digite o ano: ";
cin >> ano;
Data data(dia, mes, ano);   

data.imprimir();
    return 0;
}