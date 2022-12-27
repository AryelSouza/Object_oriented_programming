#include "Cachorro.hpp"

string Cachorro::late(){
    return "O cachorro " + nome + " esta latindo";
}

//set nome do cachorro
void Cachorro::setNome(string nome){
    this->nome = nome;
}

