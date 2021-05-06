#include <iostream>

int d3(int x, int y, int z);

int main(){
	
	
	d3(10, 10, 10);
	
	return 0;
}


int d3(int x, int y, int z){
	
	for(int i = 0; i < x; i++){
		std::cout << "|";
		for(int k = i; k <= z; k++){
			
			std::cout << " /";
		}
		if(i == (x - 1)){
			for(int u = 0; u < y * 2; u++){
				std::cout << "_";
			}
		}
		std::cout << std::endl;
	}
	
	
	
}


