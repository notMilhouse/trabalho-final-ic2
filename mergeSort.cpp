// MergeSort
// Alunos: Gabriel Carvalho Silva e Paulo Roberto Domingues dos Santos
// # USP: 11932438 e 11838721
// Professor: Renato Tinós

#include <iostream>
#include <stdlib.h>

int mov = 0, comp = 0;

void merge(int *a, int L, int h, int R, int *c)
{

    int i = L, j = h + 1, k = L - 1;

    while(i <= h && j <= R)
    {
        k++;
        comp++;
        if(a[i] < a[j])
        {
            mov++;
            c[k] = a[i];
            i++;
        } else {
            mov++;
            c[k] = a[j];
            j++;
        }
    }

    while(j <= R)
    {
        k++;
        mov++;
        c[k] = a[j];
        j++;
    }

    while(i <= h)
    {
        k++;
        mov++;
        c[k] = a[i];
        i++;
    }

}

void mpass(int *a, int n, int p, int *c)
{
    int i = 1;
    while(i <= n-2*p+1)
    {
        merge(a, i, i+p-1,i+2*p-1, c);
        i = i + 2*p;
    }
    if(i+p-1 < n)
        merge(a, i, i+p-1, n, c);
    else
        for(int j = i; j <= n; j++)
        {
            mov++;
            c[j] = a[j];
        }
}

void mergeSort(int *array, int n)
{
    int p = 1;
    int *auxArray = new int[n+1];

    while(p < n)
    {
        mpass(array, n, p, auxArray);
        p = 2*p;
        mpass(auxArray, n, p, array);
        p = 2*p;
    }
}


int main()
{
	int n;

	std::cin >> n;

	int *array = new int [n+1]; 

	for(int i = 1; i < n + 1; i++)
		std::cin >> array[i];
	
	mergeSort(array, n);

	for(int i = 1; i < n + 1; i++)
		std::cout << array[i] << " ";
	
	std::cout << "Comparacoes: " << comp << " Movimentacoes: " << mov << std::endl;
	
	return 0;
}
