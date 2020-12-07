// HeapSort
// Alunos: Gabriel Carvalho Silva e Paulo Roberto Domingues dos Santos
// # USP: 11932438 e 11838721
// Professor: Renato Tinós

#include <iostream>
#include <stdlib.h>

int mov = 0, comp = 0;


void swap(int *a, int*b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void heapify(int *array, int L, int R)
{
	int i, j, x; 
	
	i = L;
	j = 2*L;
	x = array[L]; 
	mov++;

	comp++;
	if((j < R) && (array[j] < array[j+1]))
		j++;
	
	comp++;
	while((j <= R) && (x < array[j]))
	{
		array[i] = array[j]; mov++;
		i = j;
		j = 2*j;

		comp++;
		if((j < R) && (array[j] < array[j+1]))
			j++;
		
	}
	array[i] = x; mov++;

}

void heapSort(int *array, int tamArray)
{
	for(int L = tamArray/2; L > 0; L--)
	{
		heapify(array, L, tamArray);
	}
	for( int R = tamArray; R > 1; R--)
	{
		mov += 3;
		swap(&array[1], &array[R]);

		heapify(array, 1, R-1);

	}
}


int main()
{
	int n;

	std::cin >> n;

	int *array = new int [n+1]; 

	for(int i = 1; i < n + 1; i++)
		std::cin >> array[i];
	
	heapSort(array, n);

	for(int i = 0; i < n; i++)
		std::cout << array[i] << " ";
	
	std::cout << "\nComparacoes: " << comp << "\nMovimentacoes: " << mov << std::endl;
	
	return 0;
}


