#ifndef AGENDA_HPP
#define AGENDA_HPP

#include "Pessoa.hpp"
#include <iostream>
#include <string>

using namespace std;

class Agenda{
public:
   Agenda(int tPessoas = 1);
   ~Agenda();
   void armazenaPessoa(string nome, int idade, float altura);
   void armazenaPessoa(const Pessoa &p);

   void removePessoa(string nome);

   int buscaPessoa(string nome) const; // informa em que posição da agenda está a pessoa
   void imprimePovo() const; // imprime todos os dados de todas as pessoas da agenda
   void imprimePessoa(int i) const; // imprime os dados da pessoa que está na posição 'i' da agenda
private:
   Pessoa *pessoas;
   int qtdePessoas;
};

#endif