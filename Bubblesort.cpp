void bubblesort(int * array, int size) {
	
	int uno = size - 1;
	bool trocado;
	do{
		trocado = false;
		for(int i = 0;i <= uno; i++){
			
			if(array[i] > array[i + 1]){
				swap(array[i], array[i + 1]);
				trocado = true;
			}
		}
		uno--;
	}while(trocado);
}
