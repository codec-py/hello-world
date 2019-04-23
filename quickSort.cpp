void quicksort(int arr[], int index_stanga, int index_dreapta) {
	int i = index_stanga, j = index_dreapta;
	int pivot = arr[(index_stanga + index_dreapta) / 2];


	//partitionare

	while (arr[i] < pivot) {
		i++;
	}
	while (arr[j] > pivot) {
		j--;
	}
	if (i <= j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}


	//recursivitate
	if (index_stanga < j) {
		quicksort(arr, index_stanga, j);
	}
	if (i < index_dreapta) {
		quicksort(arr, i, index_dreapta);
	}
}
