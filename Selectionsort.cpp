void selectionsort(int * array, int size) {
	for(int i = 0; i < size; i++){
		int min = i;
		for(int u = i + 1; u < size; u++){
			if(array[min] > array[u]){
				min = u;		
			}
		}
		swap(array[i], array[min]);
	}
}
