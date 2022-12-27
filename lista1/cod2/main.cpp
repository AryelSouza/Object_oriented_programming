#include "Banco.h"

int main(){

string nom;
int num;
double sal;
cout << "Digite o nome do cliente: ";
cin >> nom;
cout << "Digite o numero da conta: ";
cin >> num;
cout << "Digite o saldo inicial: ";
cin >> sal;

    ContaBanco conta1(nom, num, sal);
    conta1.imprimir();
    conta1.creditar();
    conta1.imprimir();
    conta1.debitar();
    conta1.imprimir();
    return 0;
}