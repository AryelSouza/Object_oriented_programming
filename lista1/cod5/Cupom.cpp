#include "Cupom.h"
#include <iostream>
#include <string>
using namespace std;


Cupom::Cupom(string id, string descricao, int quantidade, float preco){
    this->id = id;
    this->descricao = descricao;
    this->quantidade = quantidade;
    this->preco = preco;
}

void Cupom::setId(string id){
    this->id = id;
}

void Cupom::setDescricao(string descricao){
    this->descricao = descricao;
}

void Cupom::setQuantidade(int quantidade){
    if (quantidade < 0){
        cout << "Quantidade não pode ser negativa." << endl;
        this->quantidade = 0;
        }else{
            this->quantidade = quantidade;
        }
}

void Cupom::setPreco(float preco){
    if(preco < 0){
        cout << "Preço não pode ser negativo." << endl;
        this->preco = 0;
        }else{
            this->preco = preco;
        }
}


string Cupom::getId(){
    return id;
}

string Cupom::getDescricao(){
    return descricao;
}

int Cupom::getQuantidade(){
    return quantidade;
}

float Cupom::getPreco(){
    return preco;
}

void CalculaCupom(Cupom cupom){

    float total = cupom.getQuantidade() * cupom.getPreco();
    cout << "Total: " << total << endl;
}


void Cupom::imprimir(){
    cout << "Id: " << id << endl;
    cout << "Descrição: " << descricao << endl;
    cout << "Quantidade: " << quantidade << endl;
    cout << "Preço: " << preco << endl;
}

