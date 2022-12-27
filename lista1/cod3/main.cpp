#include "Empregado.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    string nome, sobrenome, nome2, sobrenome2;
    double salario, salario2;
    cout << "Digite o nome do primeiro empregado: ";
    cin >> nome;
    cout << "Digite o sobrenome do primeiro empregado: ";
    cin >> sobrenome;
    cout << "Digite o salario do primeiro empregado: ";
    cin >> salario;
    Empregado empregado1(nome, sobrenome, salario);

    empregado1.imprimir();

    cout << "Digite o nome do segundo empregado: ";
    cin >> nome2;
    cout << "Digite o sobrenome do segundo empregado: ";
    cin >> sobrenome2;
    cout << "Digite o salario do segundo empregado: ";
    cin >> salario2;


    Empregado empregado2(nome2, sobrenome2, salario2);

    empregado2.imprimir();

    return 0;
}