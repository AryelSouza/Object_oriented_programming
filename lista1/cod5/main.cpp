#include "Cupom.h"
#include <iostream>
#include <string>
using namespace std;



int main(){
    string id, descricao;
    int quantidade;
    float preco;
    cout << "Digite o id: ";
    cin >> id;
    cout << "Digite a descrição: ";
    cin >> descricao;
    cout << "Digite a quantidade: ";
    cin >> quantidade;
    cout << "Digite o preço: ";
    cin >> preco;
    Cupom cupom(id, descricao, quantidade, preco);
    cupom.imprimir();
    cupom.CalculaCupom();
    return 0;
}

