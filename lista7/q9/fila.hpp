//template de fila

#include <iostream>
using namespace std;

template <typename T>
class Fila {
public:
    Fila(int tamanho);
    ~Fila();
    void push(T valor);
    void pop(T &valor);
    bool vazia();
    bool cheia();
private:
    T *dados;
    int tamanho;
    int inicio;
    int fim;
};

template <typename T>
Fila<T>::Fila(int tamanho) {
    this->tamanho = tamanho;
    dados = new T[tamanho];
    inicio = 0;
    fim = 0;
}

template <typename T>
Fila<T>::~Fila() {
    delete[] dados;
}

template <typename T>

void Fila<T>::push(T valor) {
    if (cheia()) {
        throw "Fila cheia";
    }
    dados[fim] = valor;
    fim = (fim + 1) % tamanho;
}

template <typename T>

void Fila<T>::pop(T &valor) {
    if (vazia()) {
        throw "Fila vazia";
    }
    valor = dados[inicio];
    inicio = (inicio + 1) % tamanho;
}

template <typename T>

bool Fila<T>::vazia() {
    return inicio == fim;
}

template <typename T>

bool Fila<T>::cheia() {
    return (fim + 1) % tamanho == inicio;
}
