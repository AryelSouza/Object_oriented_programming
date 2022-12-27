#include <iostream>
using std::cout, std::endl;

#include <string>
using std::string;

#include "pilha.hpp"

//tratamento de erro para caso seja chamado push em uma pilha cheia
class PilhaCheiaError : public std::exception
{
public:
    PilhaCheiaError() : std::exception() {}
    PilhaCheiaError(const string &msg) : std::exception(), msg(msg) {}
    const char *what() const noexcept override
    {
        return msg.c_str();
    }

private:
    string msg;
};

//tratamento de erro para caso seja chamado pop em uma pilha vazia
class PilhaVaziaError : public std::exception
{
public:
    PilhaVaziaError() : std::exception() {}
    PilhaVaziaError(const string &msg) : std::exception(), msg(msg) {}
    const char *what() const noexcept override
    {
        return msg.c_str();
    }

private:
    string msg;
};

int main() {
    Pilha<int> pilha(10);

    try {
        pilha.push(1);
        pilha.push(2);
        pilha.push(3);
        pilha.push(4);
    } catch (PilhaCheiaError &e) {
        cout << "Excecao capturada: " << e.what() << endl;
    }

    try {
        int valor;
        while (true) {
            pilha.pop(valor);
            cout << valor << endl;
        }
    } catch (PilhaVaziaError &e) {
        cout << "Excecao capturada: " << e.what() << endl;
    }

    return 0;
}