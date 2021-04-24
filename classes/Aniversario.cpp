#include "Aniversario.h"
#include <iostream>

using namespace std;

Aniversario::Aniversario(int d, int m, int a){
	dia = d;
	mes = m;
	ano = a;
}

void Aniversario::mostrarData(){
	cout << dia << "/" << mes  << "/" << ano;
}
