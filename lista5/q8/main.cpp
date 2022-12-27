#include "Pessoa.hpp"
#include "PessoaFisica.hpp"
#include "PessoaJuridica.hpp"
#include <iostream>
using namespace std;

int main(){
    //setters
    PessoaFisica pf("Joao", "123456789");
    PessoaJuridica pj("Pedro", "Bob", "123456789");
    pf.setNome("Joao");
    pf.setCpf("123456789");
    pj.setNomeFantasia("Goku");
    pj.setRazaoSocial("Vegeta");
    pj.setCnpj("123456789");
    //getters
    cout << pf.getNome() << endl;
    cout << pf.getCpf() << endl;
    cout << pj.getNomeFantasia() << endl;
    cout << pj.getRazaoSocial() << endl;
    cout << pj.getCnpj() << endl;
    //imprime
    pf.imprime();
    pj.imprime();
    //operador <<
    cout << pf << endl;
    cout << pj << endl;
    return 0;
}