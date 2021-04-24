#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;


int Somar(int x, int y);
double quadrado(double x, double y);
string ola(string nome);
int troca(int &x, int &y);
int valorTotal(int array[]);
int trocar(int *x);
int fatorial(int n);


const double PI = 3.1415;

double circuferencia(double raio);
double areaCirculo(double raio);


class Caneta{
	
	private:
		string cor;
		double preco;
		
	public:	
	
	Caneta(string cor2, double preco2){
		this->cor = cor2;
		this->preco = preco2;
	}
	
	void info() const{
		
		cout << "Cor: " << this->cor << "\n" << "Preço: " << this->preco << endl;
		
	}
};

class Pais{

	public:	
		void Infor(){
			cout << this->nariz << endl <<  this->altura << endl << this->cabelo;
		}
	
	protected:
		string nariz;
		string altura;
		string cabelo;
		
};

class Filho: public Pais{
	
	public:
		Filho(string n, string a, string c){
			this->nariz = n;
			this->altura = a;
			this->cabelo = c;
		}
		
};


class Arranjo{
	
	public:
		Arranjo(int x, int y);
		void info(){
			cout << f << endl << z;
		}
	private:
		int f;
		int z;
};

Arranjo::Arranjo(int x, int y)
: f(x), z(y)
{
}


int f = 90;

int main(){
	
	
	
	
	return 0;
}






int Somar(int x, int y){
	
	return x + y;
	
}

int troca(int &x, int &y){
	int t = x;
	x = y;
	y = t;
	
}

int valorTotal(int array[]){
	int soma;
	for(int i = 0; i < sizeof(array)/sizeof(int); i++){
		
		cout << sizeof(array)/sizeof(int);
		
	}
	
}


int trocar(int *x){
	
	*x = 99 * 8;
	
}

int fatorial(int n){
	
	if(n == 1){
		return 1;
	}
	return n * fatorial(n - 1);
}

double quadrado(double x, double y){
	
	return x * y;
	
}

string ola(string nome){
	
	return "Bem vindo " + nome;
}

double circuferencia(double raio){
	
	return 2 * PI * raio;
	
}

double areaCirculo(double raio){
	
	return raio * raio * PI;
	
}
