#include <stdlib.h>
#include <iostream>
void swap(int *a, int*b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void bubSort(int arr[], int n, int *mov, int *comp)
{
	int i, j, x;
	for(i = 1; i < n; i++)
	{
		for(j = n-1; j > i-1; j--)
		{
			*comp += 1;
		    if(arr[j-1] > a[j])
		    {
		    	swap(a[j], a[j-1]);
				*comp += 1;
				*mov += 3;
			}
			*comp += 1;
		}
	}
	
}


int main()
{
	int n, movimentacoes, comparacoes;

	std::cin >> n;

	int *array = new int [n]; 

	for(int i = 0; i < n; i++)
		std::cin >> array[i];
	
	bubSort(array, n, &movimentacoes, &comparacoes);
	
	for(int i = 0; i < n; i++)
		std::cout << array[i];

	return 0;
}


