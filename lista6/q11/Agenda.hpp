#ifndef AGENDA_HPP
#define AGENDA_HPP
#include "Pessoa.hpp"
#include "PessoaFisica.hpp"
#include "PessoaJuridica.hpp"

class Agenda {
    private:
        Pessoa *pessoas[100];
        int qtdPessoas;
    public:
        //pesquisa por cpf
        virtual PessoaFisica* buscaPessoaFisica(string cpf);
        //pesquisa por cnpj
        virtual PessoaJuridica* buscaPessoaJuridica(string cnpj);
        //adiciona pessoa fisica
        virtual void adicionaPessoaFisica(PessoaFisica *p);
        //adiciona pessoa juridica
        virtual void adicionaPessoaJuridica(PessoaJuridica *p);
        //imprime agenda
        virtual void imprimeAgenda();
        //remove pessoa fisica
        virtual void removePessoaFisica(string cpf);
        //remove pessoa juridica
        virtual void removePessoaJuridica(string cnpj);
        //construtor
        Agenda();

};

#endif