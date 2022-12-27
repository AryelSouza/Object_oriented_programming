#ifndef IMOVELNOVO_HPP
#define IMOVELNOVO_HPP
#include "Imovel.hpp"

class ImovelNovo : public Imovel {
    private:
        float adicional;
    public:
        ImovelNovo(string endereco, float preco, float adicional);
        
        void setAdicional(float adicional);
        
        float getAdicional();
        float getPreco();
        void imprime();
};

#endif