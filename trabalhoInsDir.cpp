#include <iostream>
#include <stdlib.h>

void swap(int *a, int*b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void insDir(int arr[], int n, int *mov, int *comp)
{
	int i, j, x;
	for(i = 1; i < n; i++)
	{
		x = arr[i]; //mov
		arr[0] = x; //mov
		j = i;
		*comp += 1;
		while(x<arr[j-1])
		{
			arr[j] = arr[j-1]; //mov
			j--;
			*comp += 1;
		}
		*comp += 1;
		arr[j] = x; //mov
		
	}
}
int main()
{
	int n, movimentacoes, comparacoes;

	std::cin >> n;

	int *array = new int [n]; 

	for(int i = 0; i < n; i++)
		std::cin >> array[i];
	
	insDir(array, n, &movimentacoes, &comparacoes);
	
	for(int i = 0; i < n; i++)
		std::cout << array[i];

	return 0;
}


