#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include "PessoaFisica.hpp"

using namespace std;

class Cliente : public PessoaFisica{
    //sobrecarga do <<
    friend ostream& operator<<(ostream& os, Cliente& c);
    protected:
        string endereco;
        string telefone;
    public:
        Cliente(string nome, string cpf, string endereco, string telefone);
        string getEndereco();
        string getTelefone();
        void setEndereco(string endereco);
        void setTelefone(string telefone);
        void imprime();
        //__set e __get
        //void __set(string atributo, string valor);
    
};

#endif