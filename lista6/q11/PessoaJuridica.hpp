#ifndef PESSOAJURIDICA_HPP
#define PESSOAJURIDICA_HPP
#include "Pessoa.hpp"

//Pessoa Juridica
class PessoaJuridica : public Pessoa {
    private:
        string cnpj;
        string razaoSocial;
        string email;
        string endereco;
        string inscricaoEstadual;

    public:
        PessoaJuridica(string nome, int idade, string cnpj, string razaoSocial, string email, string endereco, string inscricaoEstadual);
        virtual string getCnpj();
        virtual string getRazaoSocial();
        virtual string getEmail();
        virtual void imprime();
        virtual string getEndereco();
        virtual string getInscricaoEstadual();

  };

#endif

