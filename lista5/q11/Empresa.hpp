#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include <string>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "PessoaJuridica.hpp"
#include "Pessoa.hpp"
#include "PessoaFisica.hpp"

using namespace std;

class Empresa : public PessoaJuridica {
    private:
        string endereco;
        string telefone;
        Funcionario* funcionarios[100];
        Cliente* clientes[100];
        int qtdFuncionarios;
        int qtdClientes;
    public:
        Empresa(string nome, string cnpj, string endereco, string telefone);
        void addFuncionario(Funcionario f);
        void addCliente(Cliente c);
        void removeFuncionario(string cpf);
        void removeCliente(string cpf);
        void imprime();
        
};
#endif