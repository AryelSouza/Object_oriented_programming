#include "ImovelVelho.hpp"
#include <iostream>
using namespace std;

ImovelVelho::ImovelVelho(string endereco, float preco, float desconto) : Imovel(endereco, preco){
    this->desconto = desconto;
}

void ImovelVelho::setDesconto(float desconto){
    this->desconto = desconto;
}

float ImovelVelho::getDesconto(){
    return desconto;
}

float ImovelVelho::getPreco(){
    return Imovel::getPreco() - desconto;
}

void ImovelVelho::imprime(){
    cout << "Endereco: " << getEndereco() << endl;
    cout << "Preco: " << getPreco() - desconto << endl;
}