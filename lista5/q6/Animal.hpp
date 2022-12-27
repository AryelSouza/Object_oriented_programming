#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
using namespace std;

class Animal{
    protected:
        string nome;
        string raca;

    public:
    Animal();
    Animal(string nome);
    string caminha();
    ~Animal();
};

#endif