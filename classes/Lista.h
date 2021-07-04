#ifndef LISTA_H
#define LISTA_H
#include <iostream>

using namespace std;

template<class T>
class Lista
{
	private:
	// itens da lista, capacidade e tamanho atual
		int indexador = 0;
		int capacidade;
		T * lista;
		T * lista2;
	
	public:
		Lista(int capacidade) {
		// inicilização do array, capacidade e tamanho
			this->capacidade = capacidade;
			this->lista = new T[capacidade]; 
		}
		~Lista() {
		//destruição do array
			delete lista;
		}
		void adiciona (const T & item) {
		// adiciona um item ao final da lista; lança “Lista cheia” caso cheia
			if(indexador >= capacidade ){
				throw "Lista cheia";
			}else{
				lista[indexador] = item;
				indexador++;
			}
		}
		T pega(int idx) {
		// pega um item pelo indice (começa em 1);
			if((idx - 1) > indexador || idx < 0){
				throw "Item inválido";
			}else{
				return lista[idx - 1];
			}
		// lança “Item inválido” se posição inválida
		}
		void insere (int idx, const T & item) {
		// insere um item na posição indicada (a partir de 1).
			int insere = 0;
			lista2 = new T[capacidade];
		// lança “Lista cheia” caso cheia
			if((idx - 1) > indexador){
				throw "Lista cheia";
			}
		// lança “Item inválido” se posição inválida
			else if(idx < 0){
				throw "Item inválido";
			}else{
				
				for(int i = 0; i <= indexador; i++){
					lista2[i] = lista[i];
				}
				for(int i = 0; i <= indexador; i++){
					if((idx - 1) != i){
						lista[i] = lista2[insere];
						insere++;
					}else{
						indexador++;
						lista[i] = item;
					}
				}
				
			}
		delete lista2;
		}
		void remove(int idx) {
		// remove item de uma posição indicada
			int remove = 0;
			lista2 = new T[capacidade];
			// lança “Item inválido” se posição inválida
			if(idx > tamanho()){
				throw "Item inváldo";
			}else if(idx < 0){
				throw "Item inválido";
			}else{
				for(int i = 0; i <= indexador; i++){
						lista2[i] = lista[i];
					}
				for(int i = 0; i <= indexador; i++){
					if(i != (idx - 1)){
						lista[i] = lista2[remove];
						remove++;
					}else{
						indexador--;
						++remove;
						lista[i] = lista2[remove];
						++remove;
					}
				}		
			
		}
			delete lista2;
		}
		void exibe() {
		// exibe os itens da saida padrão separados por espaços
			for(int i = 0; i < indexador; i++){
				cout << lista[i] << " ";
			}
		}
		int tamanho() {
		// retorna a quantidade de itens atualmente na lista
			return indexador;
		}

};

#endif
