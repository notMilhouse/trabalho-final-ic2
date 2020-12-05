#include <iostream>
#include <stdlib.h>

void swap(int *a, int*b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void binInsertionSort(int *array, int tamArray, int *comparacoes, int *movimentacoes)
{
	int i, j, R, L, x, m;
	for(i = 1; i < tamArray; i++)
	{
		x = array[i];
		*movimentacoes = *movimentacoes + 1;
		L = 0;
		R = i;
		while(L < R)
		{
			m = (L + R) / 2;
			*comparacoes = *comparacoes + 1;
			if(array[m] <= x)
				L = m + 1;
			else
				R = m;
		}
		j = i;
		while(j > R)
		{
			array[j] = array[j-1];
			*movimentacoes = *movimentacoes + 1;
			j--;
		}
		array[R] = x;
		*movimentacoes = *movimentacoes + 1;

	}

}