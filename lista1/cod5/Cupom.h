#ifndef CUPOM_H
#define CUPOM_H
#include <iostream>
#include <string>
using namespace std;
//id (string), descrição (string), quantidade (int) e o preço do item (float).
class Cupom{
public:
    Cupom(string id, string descricao, int quantidade, float preco);
    void setId(string id);
    void setDescricao(string descricao);
    void setQuantidade(int quantidade);
    void setPreco(float preco);
    string getId();
    string getDescricao();
    int getQuantidade();
    float getPreco();
    void imprimir();
    void CalculaCupom();
private:

    string id;
    string descricao;
    int quantidade;
    float preco;
};

#endif