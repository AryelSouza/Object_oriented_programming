#include "Agenda.hpp"

#include <iostream>
using namespace std;

int main()
{
	Agenda a;
	a.armazenaPessoa("Joao", 20, 1.80);
	a.armazenaPessoa("Maria", 19, 1.60);
	a.armazenaPessoa("Jose", 21, 1.70);
	a.imprimePovo();
	a.removePessoa("Maria");
	a.imprimePovo();
	a.imprimePessoa(a.buscaPessoa("Jose"));
	return 0;
}


