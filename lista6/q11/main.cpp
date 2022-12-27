#include "Agenda.hpp"
#include "PessoaFisica.hpp"
#include "PessoaJuridica.hpp"
#include <iostream>
#include <string>


using namespace std;

int main() {
    Agenda agenda;
    PessoaFisica *pessoaFisica = new PessoaFisica("Aryel", 20, "123456789", "123456","aryel@", "rua 1", "01/01/2000", "solteiro");
    PessoaJuridica *pessoaJuridica = new PessoaJuridica("Maria", 30, "987654321", "Maria LTDA", "maria@", "rua 2", "123456");
    agenda.adicionaPessoaFisica(pessoaFisica);
    agenda.adicionaPessoaJuridica(pessoaJuridica);
    agenda.imprimeAgenda();
    agenda.removePessoaFisica("123456789");
    agenda.imprimeAgenda();
    agenda.removePessoaJuridica("987654321");
    agenda.imprimeAgenda();
    return 0;
}
