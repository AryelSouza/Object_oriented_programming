#include "Empresa.hpp"
#include "PessoaJuridica.hpp"
#include "Pessoa.hpp"
#include "PessoaFisica.hpp"
#include "Funcionario.hpp"
#include "Cliente.hpp"

#include <iostream>
#include <string>

using namespace std;

//classe
Empresa::Empresa(string nome, string cnpj, string endereco, string telefone) : PessoaJuridica(nome, nome, cnpj){
    this->endereco = endereco;
    this->telefone = telefone;
    this->qtdFuncionarios = 0;
    this->qtdClientes = 0;
}

//metodos

void Empresa::addFuncionario(Funcionario f){
    this->funcionarios[qtdFuncionarios] = new Funcionario(f);
    qtdFuncionarios++;
}

void Empresa::addCliente(Cliente c){
    this->clientes[qtdClientes] = new Cliente(c);
    qtdClientes++;
}

void Empresa::removeFuncionario(string cpf){
    for(int i = 0; i < qtdFuncionarios; i++){
        if(funcionarios[i]->getCpf() == cpf){
            delete funcionarios[i];
            for(int j = i; j < qtdFuncionarios; j++){
                funcionarios[j] = funcionarios[j+1];
            }
            qtdFuncionarios--;
            break;
        }
    }
}

void Empresa::removeCliente(string cpf){
    for(int i = 0; i < qtdClientes; i++){
        if(clientes[i]->getCpf() == cpf){
            delete clientes[i];
            for(int j = i; j < qtdClientes; j++){
                clientes[j] = clientes[j+1];
            }
            qtdClientes--;
            break;
        }
    }
}

void Empresa::imprime(){
    cout << "Empresa: " << this->getNome() << endl;
    cout << "CNPJ: " << this->getCnpj() << endl;
    cout << "Endereco: " << this->endereco << endl;
    cout << "Telefone: " << this->telefone << endl;
    cout << "Funcionarios: " << endl;
    for(int i = 0; i < qtdFuncionarios; i++){
        cout << *funcionarios[i] << endl;
    }
    cout << "Clientes: " << endl;
    for(int i = 0; i < qtdClientes; i++){
        cout << *clientes[i] << endl;
    }
}