#include <iostream>
#include <stdlib.h>

void swap(int *a, int*b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void heapify(int *array, int L, int R, int *mov, int *comp)
{
	int i, j, x; 
	
	i = L;
	j = 2*L ;
	x = array[L]; 
	*mov = *mov + 1;

	*comp = *comp + 1;
	if((j < R) && (array[j] < array[j+1]))
		j++;
	*comp = *comp + 1;
	while((j <= R) && (x < array[j]))
	{
		array[i] = array[j]; *mov = *mov + 1;
		i = j;
		j = 2*j;
		if((j < R) && (array[j] < array[j+1]))
			j++;
		*comp = *comp + 1;
	}
	array[i] = x; *mov = *mov + 1;

}

void heapSort(int *array, int tamArray, int *mov, int *comp)
{
	int L, R;
	for( L = tamArray/2 - 1; L >= 0; L--)
	{
		heapify(array, L, tamArray - 1, mov, comp);
	}
	for( R = tamArray-1; R > 1; R--)
	{
		*mov = *mov + 3;
		swap(&array[0], &array[R]);
		heapify(array, 0, R-1, mov, comp);
	}
}


int main()
{
	int n, movimentacoes = 0, comparacoes = 0;

	std::cin >> n;

	int *array = new int [n]; 

	for(int i = 0; i < n; i++)
		std::cin >> array[i];
	
	heapSort( array, n, &movimentacoes, &comparacoes);

	for(int i = 0; i < n; i++)
		std::cout << array[i] << " ";
	
	std::cout << "Comparacoes: " << comparacoes << " Movimentacoes: " << movimentacoes << std::endl;
	
	return 0;
}


