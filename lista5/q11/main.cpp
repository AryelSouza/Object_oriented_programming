#include "Pessoa.hpp"
#include "PessoaFisica.hpp"
#include "PessoaJuridica.hpp"
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Empresa.hpp"

#include <iostream>
#include <string>

using namespace std;

int main(){
    Empresa e("Empresa", "123456789", "Rua 1", "123456789");
    Funcionario f("Funcionario", "123456789", "123456789", 1000, 100, 100);
    Cliente c("Cliente", "987654321", "Rua 3", "123456789");
    e.addFuncionario(f);
    e.addCliente(c);
    e.imprime();
    e.removeFuncionario("123456789");
    e.removeCliente("987654321");
    e.imprime();
    //adicionando funcionarios
    for(int i = 0; i < 100; i++){
        Funcionario f("Funcionario " + to_string(i), "123456789" + to_string(i), "123456789" + to_string(i), 1000, 100, 100);
        e.addFuncionario(f);
    }
    //adicionando clientes
    for(int i = 0; i < 100; i++){
        Cliente c("Cliente " + to_string(i), "987654321" + to_string(i), "Rua " + to_string(i), "123456789" + to_string(i));
        e.addCliente(c);
    }
    //print
    e.imprime();
    //removendo funcionarios
    for(int i = 0; i < 100; i++){
        e.removeFuncionario("123456789" + to_string(i));
    }
    //removendo clientes
    for(int i = 0; i < 100; i++){
        e.removeCliente("987654321" + to_string(i));
    }
    //print
    e.imprime();
    return 0;
}