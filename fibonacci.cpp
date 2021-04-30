#include<iostream>

int fibonacci(int n);

int main(){
  
  fibonacci(99);
  
  return 0;
}


int fibonacci(int n){
	double a = 0, b = 1, c = 0;
	cout << a << " " << b << " ";
	for(int i = 1; i < n; i++){
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}
}
