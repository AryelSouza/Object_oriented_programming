#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
#include <string>
using namespace std;

class Empregado{
public:
    Empregado(string nome, string sobrenome, double salario);
    void setNome(string nome);
    void setSobrenome(string sobrenome);
    void setSalario(double salario);
    string getNome();
    string getSobrenome();
    double getSalario();
    void imprimir();

private:

    string nome;
    string sobrenome;
    double salario;
};
#endif