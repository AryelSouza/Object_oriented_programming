#ifndef DIA_H
#define DIA_H
#include <iostream>
#include <string>
using namespace std;

class Data{
public:
    Data(int dia, int mes, int ano);
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
    int getDia();
    int getMes();
    int getAno();
    void imprimir();
private:
    int dia;
    int mes;
    int ano;
};

#endif