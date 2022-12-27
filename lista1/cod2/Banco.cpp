#include "Banco.h"
#include <iostream>
#include <string>
using namespace std;

ContaBanco::ContaBanco(string nome, int numero, double saldo){
    if (saldo < 0){
        cout << "Saldo inicial não pode ser negativo." << endl;
        this->saldo = 0;
    }else{ 
        this->saldo = saldo;
    }
    
    
    this->nome = nome;
    this->numero = numero;
}

void ContaBanco::setNome(string nome){
    this->nome = nome;
}

void ContaBanco::setNumero(int numero){
    this->numero = numero;
}

void ContaBanco::setSaldo(double saldo){
    this->saldo = saldo;
}

string ContaBanco::getNome(){
    return nome;
}

int ContaBanco::getNumero(){
    return numero;
}

float ContaBanco::getSaldo(){
    return saldo;
}

void ContaBanco::imprimir(){
    cout << "Nome: " << nome << endl;
    cout << "Numero: " << numero << endl;
    cout << "Saldo: " << saldo << endl;
}

void ContaBanco::creditar(){
    double valor;
    cout << "Digite o valor a ser depositado: ";
    cin >> valor;
    if (valor < 0){
        cout << "Valor inválido." << endl;
    }else{
        saldo += valor;
    }

}
void ContaBanco::debitar(){
    double valor;
    cout << "Digite o valor a ser sacado: ";
    cin >> valor;
    if (valor > saldo){
        cout << "Saldo insuficiente." << endl;
    }else{
        saldo -= valor;
    }
}
