#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <string>
#include <iostream>
using namespace std;

class Imovel {
    private:
        string endereco;
        float preco;
    public:
        Imovel(string endereco, float preco);
        
        void setEndereco(string endereco);
        void setPreco(float preco);
        
        string getEndereco();
        float getPreco();
        virtual void imprime();
};

#endif