#include "Funcionario.hpp"
#include <iostream>
using namespace std;

Funcionario::Funcionario(string nome, string cpf, string matricula, float salario, int horasTrabalhadas, int cargaHoraria) : PessoaFisica(nome, cpf){
    this->matricula = matricula;
    this->salario = salario;
    this->horasTrabalhadas = horasTrabalhadas;
    this->cargaHoraria = cargaHoraria;
}

string Funcionario::getMatricula(){
    return matricula;
}

float Funcionario::getSalario(){
    return salario;
}

int Funcionario::getHorasTrabalhadas(){
    return horasTrabalhadas;
}

int Funcionario::getCargaHoraria(){
    return cargaHoraria;
}

void Funcionario::setMatricula(string matricula){
    this->matricula = matricula;
}

void Funcionario::setSalario(float salario){
    this->salario = salario;
}

void Funcionario::setHorasTrabalhadas(int horasTrabalhadas){
    this->horasTrabalhadas = horasTrabalhadas;
}

void Funcionario::setCargaHoraria(int cargaHoraria){
    this->cargaHoraria = cargaHoraria;
}

void Funcionario::imprime(){
    cout << "Nome: " << getNome() << endl;
    cout << "CPF: " << getCpf() << endl;
    cout << "Matricula: " << getMatricula() << endl;
    cout << "Salario: " << getSalario() << endl;
    cout << "Horas Trabalhadas: " << getHorasTrabalhadas() << endl;
    cout << "Carga Horaria: " << getCargaHoraria() << endl;
}



ostream& operator<<(ostream& os, Funcionario& f){
    os << "Nome: " << f.getNome() << endl;
    os << "CPF: " << f.getCpf() << endl;
    os << "Matricula: " << f.getMatricula() << endl;
    os << "Salario: " << f.getSalario() << endl;
    os << "Horas Trabalhadas: " << f.getHorasTrabalhadas() << endl;
    os << "Carga Horaria: " << f.getCargaHoraria() << endl;
    return os;
}

float Funcionario::salarioBruto(){
    return getSalario() * getHorasTrabalhadas()/getCargaHoraria();
}