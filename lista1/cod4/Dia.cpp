#include "Dia.h"
#include <iostream>
#include <string>
using namespace std;

Data::Data(int dia, int mes, int ano){
    if (dia < 1 || dia > 31){
        cout << "Dia inválido." << endl;
        this->dia = 1;
    }else{
        this->dia = dia;
    }
    if (mes < 1 || mes > 12){
        cout << "Mês inválido." << endl;
        this->mes = 1;
    }else{
        this->mes = mes;
    }
    if (ano < 0){
        cout << "Ano inválido." << endl;
        this->ano = 0;
    }else{
        this->ano = ano;
    }
}

void Data::setDia(int dia){
    this->dia = dia;
}

void Data::setMes(int mes){
    this->mes = mes;
}

void Data::setAno(int ano){
    this->ano = ano;
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::imprimir(){
    cout << dia << "/" << mes << "/" << ano << endl;
}
