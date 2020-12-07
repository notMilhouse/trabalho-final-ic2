// Direct Insertion Sort
// Alunos: Gabriel Carvalho Silva e Paulo Roberto Domingues dos Santos
// # USP: 11932438 e 11838721
// Professor: Renato Tinós

#include <iostream>
#include <stdlib.h>

int mov = 0, comp = 0;

void insDir(int arr[], int n)
{
	int i, j;
	
	for(i = 2; i <= n; i++)
	{	
		mov = mov + 2;

		int x = arr[i]; 
		arr[0] = x; 
		j = i;
		
		comp = comp + 1;
		while(x < arr[j-1])
		{
			mov = mov + 1;

			arr[j] = arr[j-1];
			j--;
			
			comp = comp + 1;
		}
		
		mov = mov + 1;
		arr[j] = x;
		
	} 
	
}
int main()
{
	int n;

	std::cin >> n;

	int *array = new int [n + 1]; 

	for(int i = 1; i < n + 1; i++)
		std::cin >> array[i];
	
	insDir(array, n);
	
	for(int i = 0; i < n; i++)
		std::cout << array[i] << " ";
	
	std::cout << "\nComparacoes: " << comp << "\nMovimentacoes: " << mov << std::endl;
	
	return 0;
}

