#include "Animal.hpp"
#include <iostream>
using namespace std;

Animal::Animal(){
    nome = "Sem nome";
    raca = "Sem raça";
}

Animal::Animal(string nome){
    this->nome = nome;
    raca = "Sem raça";
}

string Animal::caminha(){
    return nome + " está caminhando";
}

Animal::~Animal(){
    cout << "Animal " << nome << " destruído" << endl;
}

