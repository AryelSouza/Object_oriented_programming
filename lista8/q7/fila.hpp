
#include <iostream>
using namespace std;

template <typename T>
class Fila {
private:
    T *dados;
    int tamanho;
    int inicio;
    int fim;
    int qtd;
public:
    Fila(int tam);
    ~Fila();
    void enfileira(T dado);
    T desenfileira();
    T primeiro();
    bool vazia();
    bool cheia();
    void imprime();
};

template <typename T>
Fila<T>::Fila(int tam) {
    dados = new T[tam];
    tamanho = tam;
    inicio = 0;
    fim = 0;
    qtd = 0;
}

template <typename T>
Fila<T>::~Fila() {
    delete[] dados;
}

template <typename T>
void Fila<T>::enfileira(T dado) {
    if (cheia()) {
        cout << "Fila cheia!" << endl;
        return;
    }
    dados[fim] = dado;
    fim = (fim + 1) % tamanho;
    qtd++;
}

template <typename T>
T Fila<T>::desenfileira() {
    if (vazia()) {
        cout
            << "Fila vazia!" << endl;
        return 0;
    }
    T dado = dados[inicio];
    inicio = (inicio + 1) % tamanho;
    qtd--;
    return dado;
}

template <typename T>
T Fila<T>::primeiro() {
    if (vazia()) {
        cout
            << "Fila vazia!" << endl;
        return 0;
    }
    return dados[inicio];
}

template <typename T>
bool Fila<T>::vazia() {
    return qtd == 0;
}

template <typename T>
bool Fila<T>::cheia() {
    return qtd == tamanho;
}

template <typename T>
void Fila<T>::imprime() {
    if (vazia()) {
        cout

            << "Fila vazia!" << endl;
        return;
    }
    int i = inicio;
    while (i != fim) {
        cout << dados[i] << " ";
        i = (i + 1) % tamanho;
    }
    cout << endl;
}