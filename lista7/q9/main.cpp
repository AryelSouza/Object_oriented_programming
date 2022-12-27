#include "fila.hpp"
#include <iostream>
using namespace std;

//tratamento de exceção caso a fila esteja cheia
class FilaCheiaError : public std::exception
{
public:
    FilaCheiaError() : std::exception() {}
    FilaCheiaError(const string &msg) : std::exception(), msg(msg) {}
    const char *what() const noexcept override
    {
        return msg.c_str();
    }

private:

    string msg;
};

//tratamento de exceção caso a fila esteja vazia
class FilaVaziaError : public std::exception
{

public:
    FilaVaziaError() : std::exception() {}
    FilaVaziaError(const string &msg) : std::exception(), msg(msg) {}
    const char *what() const noexcept override
    {
        return msg.c_str();
    }

private:

    string msg;
};

int main() {
    Fila<int> fila(10);

    try {
        fila.push(1);
        fila.push(2);
        fila.push(3);
        fila.push(4);
    } catch (FilaCheiaError &e) {
        cout << "Excecao capturada: " << e.what() << endl;
    }

    try {
        int valor;
        while (true) {
            fila.pop(valor);
            cout << valor << endl;
        }
    } catch (FilaVaziaError &e) {
        cout << "Excecao capturada: " << e.what() << endl;
    }

    return 0;
}