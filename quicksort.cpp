#include <iostream>
#include <stdlib.h>


void swap(int *a, int*b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

//caso recorrente
void quickSort(int *array, int L, int R)
{
	int i, j, x, w;
	
	i = L;
	j = R;
	x = array[(L+R)/2];

	do
	{
		
		while(array[i] < x) i++;
		while(array[j] > x) j++;
		
		if(i <= j)
		{
			swap(&array[i], &array[j]);
			
			i++;
			j--;
		}

	}while(i <= j);

	if(L < j) quickSort(array, L, j);
	if(R > i) quickSort(array, L, j);
	
}
//caso inicial
void quickSort(int *array, int tamArray)
{
	quickSort(array, 0, tamArray-1);	
}

int main()
{
	int n;
	std::cin >> n;

	int *array = new int [n]; 

	for(int i = 0; i < n; i++)
		std::cin >> array[i];
	
	quickSort(array, n);
	
	for(int i = 0; i < n; i++)
		std::cout << array[i];

	return 0;
}


