#include <iostream>

using namespace std;


int trinagulo(int n);

int main(){
	
	triangulo(100)
	
	
	return 0;
}

int trinagulo(int n){
	
		for(int i = 0; i < n; i++){
		
		for(int o = i; o < n; o++){
			cout << " ";
		}
		cout << "/";
		for(int u = i; u < i * 3; u++){
			cout << " ";
		}
		cout << "\\" << endl;
	}
	return trinagulo(n - 1);
}
