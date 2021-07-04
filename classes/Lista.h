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
		// iniciliza��o do array, capacidade e tamanho
			this->capacidade = capacidade;
			this->lista = new T[capacidade]; 
		}
		~Lista() {
		//destrui��o do array
			delete lista;
		}
		void adiciona (const T & item) {
		// adiciona um item ao final da lista; lan�a �Lista cheia� caso cheia
			if(indexador >= capacidade ){
				throw "Lista cheia";
			}else{
				lista[indexador] = item;
				indexador++;
			}
		}
		T pega(int idx) {
		// pega um item pelo indice (come�a em 1);
			if((idx - 1) > indexador || idx < 0){
				throw "Item inv�lido";
			}else{
				return lista[idx - 1];
			}
		// lan�a �Item inv�lido� se posi��o inv�lida
		}
		void insere (int idx, const T & item) {
		// insere um item na posi��o indicada (a partir de 1).
			int insere = 0;
			lista2 = new T[capacidade];
		// lan�a �Lista cheia� caso cheia
			if((idx - 1) > indexador){
				throw "Lista cheia";
			}
		// lan�a �Item inv�lido� se posi��o inv�lida
			else if(idx < 0){
				throw "Item inv�lido";
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
		// remove item de uma posi��o indicada
			int remove = 0;
			lista2 = new T[capacidade];
			// lan�a �Item inv�lido� se posi��o inv�lida
			if(idx > tamanho()){
				throw "Item inv�ldo";
			}else if(idx < 0){
				throw "Item inv�lido";
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
		// exibe os itens da saida padr�o separados por espa�os
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
