// Selection Sort
// Alunos: Gabriel Carvalho Silva e Paulo Roberto Domingues dos Santos
// # USP: 11932438 e 11838721
// Professor: Renato Tinós

#include <iostream>
#include <stdlib.h>

int mov = 0, comp = 0;

void swap(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void selSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++) 
    { 	
    	int menor;
    	
        menor = i;
		 
        for (j = i+1; j < n; j++) 
        {
		    comp = comp + 1;

            if (arr[j] < arr[menor])
            { 
                menor = j;     
            }
    	}
        swap(&arr[i], &arr[menor]);
        
        mov = mov + 3; 
    } 
} 

int main()
{
	int n;

	std::cin >> n;

	int *array = new int [n]; 

	for(int i = 0; i < n; i++)
		std::cin >> array[i];
	
	selSort(array, n);
	
	for(int i = 0; i < n; i++)
		std::cout << array[i] << " ";
	
	std::cout << "\nComparacoes: " << comp << "\nMovimentacoes: " << mov << std::endl;

	return 0;
}

