#include <iostream>
#include <stdlib.h>

void swap(int *a, int*b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void selSort(int arr[], int n, int *mov, int *comp) 
{ 
    int i, j, menor, x; 
    for (i = 0; i < n-1; i++) 
    { 
        menor = i; 
        for (j = i+1; j < n; j++) 
            *comp += 1;
            if (arr[j] < arr[menor])
            { 
                menor = j; 
                *comp += 1;
            }   
        swap(&arr[i], &arr[menor]);
        *mov += 3; 
    } 
} 

int main()
{
	int n, movimentacoes, comparacoes;

	std::cin >> n;

	int *array = new int [n]; 

	for(int i = 0; i < n; i++)
		std::cin >> array[i];
	
	selSort(array, n, &movimentacoes, &comparacoes);
	
	for(int i = 0; i < n; i++)
		std::cout << array[i];

	return 0;
}


