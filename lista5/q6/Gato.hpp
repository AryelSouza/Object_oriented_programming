#ifndef GATO_HPP
#define GATO_HPP

#include "Animal.hpp"

class Gato : public Animal{
    public:
        string mia();
        void setNome(string nome);
};

#endif