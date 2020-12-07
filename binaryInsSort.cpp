// Binary Insertion Sort
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

void binInsertionSort(int *array, int tamArray)
{
	int i, j, R, L, x, m;
	for(i = 1; i < tamArray; i++)
	{
		x = array[i];
		mov = mov + 1;
		L = 0;
		R = i;
		while(L < R)
		{
			m = (L + R) / 2;
			comp = comp + 1;
			if(array[m] <= x)
				L = m + 1;
			else
				R = m;
		}
		j = i;
		while(j > R)
		{
			array[j] = array[j-1];
			mov = mov + 1;
			j--;
		}
		array[R] = x;
		mov = mov + 1;

	}

}

int main()
{
	int n;

	std::cin >> n;

	int *array = new int [n]; 

	for(int i = 0; i < n; i++)
		std::cin >> array[i];
	
	binInsertionSort(array, n);
	
	for(int i = 0; i < n; i++)
		std::cout << array[i] << " ";
	
	std::cout << "\ncomp: " << comp << "\nMovimentacoes: " << mov << std::endl;
	
	return 0;
}