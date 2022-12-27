#include "troca.h"
#include <iostream>
#include <string>
using namespace std;

Personagem rob("Rob","Masculino");
Personagem adele("Adele","Feminino");

trocaAlma(rob,adele);

rob.displayMessage();

adele.displayMessage();
