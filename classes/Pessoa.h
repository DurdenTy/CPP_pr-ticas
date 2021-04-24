#ifndef PESSOA_H
#define PESSOA_H
#include "Aniversario.h"

class Pessoa
{
	public:
		Pessoa(string n, Aniversario an);
		void printPessoa();
	private:
		string nome;
		Aniversario aniversario;
};

#endif
