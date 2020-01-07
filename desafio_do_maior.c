#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void BUBBLE_SORT(int array[], int tamanho_array)
{
	int j, i, aux;

	for(j = 0 ; j < tamanho_array ; j++)
	{
		for(i = 0 ; i < tamanho_array-1 ; i++)
		{
			if(array[i] < array[i+1])
			{
				aux = array[i];
				array[i] = array[i+1];
				array[i+1] = aux;
			}
		}
	}
}

int main()
{
    int a, i = 0, array[100];

    while(scanf("%d", &array[i]) != EOF)
    {
		printf("#%d\n", array[i]);
        i++;
    }

    BUBBLE_SORT(array, i);

    printf("%d\n", array[0]);

	return 0;
}
