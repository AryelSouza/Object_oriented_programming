#include "Cliente.hpp"
#include "PessoaFisica.hpp"
#include "Pessoa.hpp"
#include <iostream>

using namespace std;

int main(){
    Cliente c("Aryel", "123456789", "Rua 1", "123456789");
    cout << c;
    //setters
    c.setNome("Danilo");
    c.setCpf("987654321");
    c.setEndereco("Rua 2");
    c.setTelefone("987654321");
    cout << c;
    return 0;

}