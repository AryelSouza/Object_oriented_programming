#include "Agenda.hpp"

//construtor
Agenda::Agenda() {
    this->qtdPessoas = 0;
}

PessoaFisica* Agenda::buscaPessoaFisica(string cpf) {
    for (int i = 0; i < this->qtdPessoas; i++) {
        PessoaFisica *pf = dynamic_cast<PessoaFisica*>(this->pessoas[i]);
        if (pf != NULL && pf->getCpf() == cpf) {
            return pf;
        }
    }
    return NULL;
}

PessoaJuridica* Agenda::buscaPessoaJuridica(string cnpj) {
    for (int i = 0; i < this->qtdPessoas; i++) {
        PessoaJuridica *pj = dynamic_cast<PessoaJuridica*>(this->pessoas[i]);
        if (pj != NULL && pj->getCnpj() == cnpj) {
            return pj;
        }
    }
    return NULL;
}

void Agenda::adicionaPessoaFisica(PessoaFisica *p) {
    this->pessoas[this->qtdPessoas] = p;
    this->qtdPessoas++;
}

void Agenda::adicionaPessoaJuridica(PessoaJuridica *p) {
    this->pessoas[this->qtdPessoas] = p;
    this->qtdPessoas++;
}

void Agenda::imprimeAgenda() {
    for (int i = 0; i < this->qtdPessoas; i++) {
        this->pessoas[i]->imprime();
    }
}

void Agenda::removePessoaFisica(string cpf) {
    for (int i = 0; i < this->qtdPessoas; i++) {
        PessoaFisica *pf = dynamic_cast<PessoaFisica*>(this->pessoas[i]);
        if (pf != NULL && pf->getCpf() == cpf) {
            this->pessoas[i] = this->pessoas[this->qtdPessoas - 1];
            this->qtdPessoas--;
            return;
        }
    }
}

void Agenda::removePessoaJuridica(string cnpj) {
    for (int i = 0; i < this->qtdPessoas; i++) {
        PessoaJuridica *pj = dynamic_cast<PessoaJuridica*>(this->pessoas[i]);
        if (pj != NULL && pj->getCnpj() == cnpj) {
            this->pessoas[i] = this->pessoas[this->qtdPessoas - 1];
            this->qtdPessoas--;
            return;
        }
    }
}