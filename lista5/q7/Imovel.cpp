#include "Imovel.hpp"
#include <iostream>
using namespace std;

Imovel::Imovel(string endereco, float preco){
    this->endereco = endereco;
    this->preco = preco;
}

void Imovel::setEndereco(string endereco){
    this->endereco = endereco;
}

void Imovel::setPreco(float preco){
    this->preco = preco;
}

string Imovel::getEndereco(){
    return endereco;
}

float Imovel::getPreco(){
    return preco;
}

void Imovel::imprime(){
    cout << "Endereco: " << endereco << endl;
    cout << "Preco: " << preco << endl;
}
