#include "Pessoa.h"
#include "Aniversario.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa(string n, Aniversario an)
: nome(n),
aniversario(an)
{
	
}

void Pessoa::printPessoa(){
	cout << nome + "\nNasceu dia: ";
	aniversario.mostrarData();
}
