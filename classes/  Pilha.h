#ifndef PILHA_H
#define PILHA_H

#include<iostream>

using namespace std;

	template <class T>
	class Pilha {
	private:
		int maximo;
		int indexador = 0;
		T * pilha;
	public:
		Pilha(int capacidade) {
			this->maximo = capacidade;
			this->pilha = new T[maximo];
		}
		~Pilha() {
			delete pilha;
		}
		void empilha(T item) {
			if(indexador < maximo) {
				pilha[indexador] = item;
				indexador++;
			}
			else {
				throw "Estouro da pilha!";
			}
		}
		T desempilha() {
			
			if (indexador > 0) {
				--indexador;
			}
			else {
				throw "Pilha vazia";
			}
			return pilha[indexador];
		}
		int tamanho() {
			return indexador;
		}
	};


#endif
