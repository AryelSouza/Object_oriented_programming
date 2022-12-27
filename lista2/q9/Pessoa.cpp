#include "Pessoa.h"
#include <iostream>
#include <string>


using namespace std;

Pessoa::Pessoa(string nome, string cpf){

    this->nome = nome;
    this->cpf = cpf;
}

void Pessoa::CPFValido(){
    int soma = 0;
    int resto = 0;
    int digito1 = 0;
    int digito2 = 0;
    int cpf[11];
    int i = 0;
    int j = 10;
    int k = 11;

    for(i = 0; i < 11; i++){
        cpf[i] = this->cpf[i] - '0';
    }

    for(i = 0; i < 9; i++){
        soma += cpf[i] * j;
        j--;
    }

    resto = soma % 11;

    if(resto < 2){
        digito1 = 0;
    }else{
        digito1 = 11 - resto;
    }

    soma = 0;
    j = 11;

    for(i = 0; i < 10; i++){
        soma += cpf[i] * j;
        j--;
    }

    resto = soma % 11;

    if(resto < 2){
        digito2 = 0;
    }else{
        digito2 = 11 - resto;
    }

    if(digito1 == cpf[9] && digito2 == cpf[10]){
        cout << "CPF valido" << endl;
    }else{
        cout << "CPF invalido" << endl;
    }
}


void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setCpf(string cpf){
    this->cpf = cpf;
}

string Pessoa::getNome(){
    return nome;
}


string Pessoa::getCpf(){
    return cpf;
}

void Pessoa::imprimir(){
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << cpf << endl;
}