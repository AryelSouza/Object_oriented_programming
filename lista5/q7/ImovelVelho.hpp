#ifndef IMOVELVELHO_HPP
#define IMOVELVELHO_HPP

#include "Imovel.hpp"

class ImovelVelho : public Imovel {
    private:
        float desconto;
    public:
        ImovelVelho(string endereco, float preco, float desconto);
        
        void setDesconto(float desconto);
        
        float getDesconto();
        float getPreco();
        void imprime();
};

#endif