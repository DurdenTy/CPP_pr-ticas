#ifndef FILA_H
#define FILA_H

using namespace std;

template <class T>
class Fila
{
	private:
		int indexador = 0;
		int inicio = 0;
		int maximo;
		T * fila;
		
	public:
		Fila(int cap) {
			// inicializar array de items, capacidade, tamanho, posi��o inicial
			this->maximo = cap;
			this->fila = new T[maximo];
		}
		~Fila() {
			delete fila;
		}
		void enfileira(const T & item) {
			// adiciona um item ao final da fila; lan�a �Fila cheia� caso cheia
			if(indexador < maximo){
				fila[indexador] = item;
				indexador++;
			}else{
				throw "Fila cheia";
			}
		}
		T desenfileira() {
			// remove um item do inicio da fila; lan�a �Fila vazia� caso vazia
			if(inicio < maximo){
				inicio++;
				indexador--;		
			}else{
				throw "Fila vazia";
			}
			return fila[inicio - 1];
		
		}
		int cheia() {
			// retorna 1 se cheia, 0 caso contr�rio
			if(indexador == maximo){
				return 1;
			}else{
				return 0;
			}
		}
		int vazia() {
			// retorna 1 se vazia, 0 caso contr�rio
			if(indexador == 0){
				return 1;
			}else{
				return 0;
			}
		}
		int tamanho() {
			// retorna a quantidade de itens atualmente na fila
			return indexador;
		}
};



#endif
