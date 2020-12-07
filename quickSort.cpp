// QuickSort
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

//caso recorrente
void qSort(int array[], int L, int R)
{
	int i, j, x;
	
	i = L;
	j = R;
	x = array[(L+R)/2];
	mov = mov + 1;
	
	do
	{
		comp = comp + 1;
		while(array[i] < x)
		{
			i++;
			comp = comp + 1;
		} 
			

		comp = comp + 1;
		while(array[j] > x) 
		{			
			j--;
			comp = comp + 1;
		}
		
		if(i <= j)
		{
			mov = mov + 3;
			swap(&array[i], &array[j]);
			
			i++;
			j--;
		}

	}while(i <= j);
	
	if(L < j) qSort(array, L, j);
	
	if(R > i) qSort(array, i, R);
	
}
//caso inicial
void quickSort(int array[], int tamArray)
{
	qSort(array, 1, tamArray);	
}

int main()
{
	int n;
	
	std::cin >> n;

	int *array = new int [n + 1]; 

	for(int i = 1; i < n+1; i++)
		std::cin >> array[i];
	
	quickSort(array, n);
	
	for(int i = 1; i < n+1; i++)
		std::cout << array[i] << " ";
	
	std::cout << "\nComparacoes: " << comp << "\nMovimentacoes: " << mov << std::endl;
	return 0;
}

