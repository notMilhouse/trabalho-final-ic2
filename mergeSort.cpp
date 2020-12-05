#include <iostream>


void mergeSort(int *array, int n, int *mov, int *comp)
{
    
}


int main()
{
	int n, movimentacoes, comparacoes;

	std::cin >> n;

	int *array = new int [n]; 

	for(int i = 0; i < n; i++)
		std::cin >> array[i];
	
	mergeSort(array, n, &movimentacoes, &comparacoes);

	for(int i = 0; i < n; i++)
		std::cout << array[i] << " ";
	
	std::cout << std::endl;
	
	return 0;
}
