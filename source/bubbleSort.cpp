// Bubble Sort
// Alunos: Gabriel Carvalho Silva e Paulo Roberto Domingues dos Santos
// # USP: 11932438 e 11838721
// Professor: Renato Tinós

#include <stdlib.h>
#include <iostream>

int mov = 0, comp = 0;

void swap(int *a, int*b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void bubSort(int arr[], int n)
{
	int i, j;
	for(i = 1; i < n; i++)
	{	
		for(j = n-1; j > i-1; j--)
		{
			
		    if(arr[j-1] > arr[j])
		    {
				mov = mov + 3;
		    	swap(&arr[j-1], &arr[j]);
				
			}
			comp = comp + 1;
		}
	}
}


int main()
{
	int n;

	std::cin >> n;

	int *array = new int [n]; 

	for(int i = 0; i < n; i++)
		std::cin >> array[i];
	
	bubSort(array, n);
	
	for(int i = 0; i < n; i++)
		std::cout << array[i] << " ";
	
	std::cout << "\nComparacoes: " << comp << "\nMovimentacoes: " << mov << std::endl;
	
	return 0;
}

