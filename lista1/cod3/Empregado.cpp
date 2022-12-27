#include "Empregado.h"
#include <iostream>
#include <string>
using namespace std;


Empregado::Empregado(string nome, string sobrenome, double salario){
    if (salario < 0){
        cout << "Salario não pode ser negativo." << endl;
        this->salario = 0;
    }else{ 
        this->salario = salario;
    }
    this->nome = nome;
    this->sobrenome = sobrenome;
}

void Empregado::setNome(string nome){
    this->nome = nome;
}

void Empregado::setSobrenome(string sobrenome){
    this->sobrenome = sobrenome;
}

void Empregado::setSalario(double salario){
    this->salario = salario;
}

string Empregado::getNome(){
    return nome;
}

string Empregado::getSobrenome(){
    return sobrenome;
}

double Empregado::getSalario(){
    return salario;
}

void Empregado::imprimir(){
    cout << "Nome: " << nome << " " << sobrenome << endl;
    cout << "Salario mensal: " << salario << endl;
    cout << "Salario anual: " << salario * 12 << endl;
    cout << "Salario mensal após aumento: " << salario * 1.1 << endl;
    cout << "Salario anual após aumento: " << salario * 12 * 1.1 << endl;
}

