#include "Funcionario.hpp"
#include "PessoaFisica.hpp"
#include "Pessoa.hpp"
#include <iostream>

using namespace std;

int main(){
    Funcionario f("Aryel", "123456789", "123", 1000, 40, 40);
    cout << f;
    //setters
    f.setNome("Danilo");
    f.setCpf("987654321");
    f.setMatricula("321");
    f.setSalario(2000);
    f.setHorasTrabalhadas(80);
    f.setCargaHoraria(80);
    cout << f;
    return 0;

}