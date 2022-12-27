#include "Gato.hpp"

string Gato::mia(){
    return "O gato " + nome + " esta miando";
}

//set nome do gato
void Gato::setNome(string nome){
    this->nome = nome;
}