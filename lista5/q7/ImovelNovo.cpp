#include "ImovelNovo.hpp"
#include <iostream>
using namespace std;

ImovelNovo::ImovelNovo(string endereco, float preco, float adicional) : Imovel(endereco, preco){
    this->adicional = adicional;
}

void ImovelNovo::setAdicional(float adicional){
    this->adicional = adicional;
}

float ImovelNovo::getAdicional(){
    return adicional;
}

float ImovelNovo::getPreco(){
    return Imovel::getPreco() + adicional;
}

void ImovelNovo::imprime(){
    cout << "Endereco: " << getEndereco() << endl;
    cout << "Preco: " << getPreco() + adicional << endl;
}

