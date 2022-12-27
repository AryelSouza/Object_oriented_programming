#ifndef CACHORRO_HPP
#define CACHORRO_HPP

#include "Animal.hpp"

class Cachorro : public Animal{
    public:
        string late();
        void setNome(string nome);
};

#endif