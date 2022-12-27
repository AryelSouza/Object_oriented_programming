#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>
#include "PessoaFisica.hpp"

using namespace std;

class Funcionario : public PessoaFisica{
    //sobrecarga do <<
    friend ostream& operator<<(ostream& os, Funcionario& f);
    private:
        string matricula;
        float salario;
        int horasTrabalhadas;
        int cargaHoraria;
    public:
        Funcionario(string nome, string cpf, string matricula, float salario, int horasTrabalhadas, int cargaHoraria);
        string getMatricula();
        float getSalario();
        int getHorasTrabalhadas();
        int getCargaHoraria();
        void setMatricula(string matricula);
        void setSalario(float salario);
        void setHorasTrabalhadas(int horasTrabalhadas);
        void setCargaHoraria(int cargaHoraria);
        void imprime();
        float salarioBruto();
};

#endif