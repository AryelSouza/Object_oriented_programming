#include "fila.hpp"

//main
int main() {
    Fila<int> f(5);
    f.enfileira(1);
    f.enfileira(2);
    f.enfileira(3);
    f.enfileira(4);
    f.enfileira(5);
    f.imprime();
    f.desenfileira();
    f.imprime();
    f.desenfileira();
    f.imprime();
    f.desenfileira();
    f.imprime();
    f.desenfileira();
    f.imprime();
    f.desenfileira();
    f.imprime();
    f.desenfileira();
    f.imprime();
    f.enfileira(1);
    f.imprime();
    f.enfileira(2);
    f.imprime();
    
    return 0;
}