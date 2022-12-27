#include "Animal.hpp"
#include "Gato.hpp"
#include "Cachorro.hpp"
#include <iostream>
using namespace std;

int main(){
    Animal *a = new Animal("Austria");
    Gato *g = new Gato();
    Cachorro *c = new Cachorro();
    //set nome gato
    g->setNome("Zeus");
    //set nome cachorro
    c->setNome("Thor");

    cout << a->caminha() << endl;
    cout << g->caminha() << endl;
    cout << c->caminha() << endl;

    cout << g->mia() << endl;
    cout << c->late() << endl;

    delete a;
    delete g;
    delete c;

    return 0;
}