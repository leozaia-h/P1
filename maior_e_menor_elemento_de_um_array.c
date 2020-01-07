#include <stdio.h>

void BUBBLE_SORT(int array[], int tamanho_array)
{
	int j, i, aux;

	for(j = 0 ; j < tamanho_array ; j++)
	{
		for(i = 0 ; i < tamanho_array-1 ; i++)
		{
			if(array[i] > array[i+1])
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
	int count, i=0, array[999];

	while(scanf("%d", &array[i]) != EOF)
	{
		i++;
		count++;
	}

	BUBBLE_SORT(array, count);

	printf("%d\n%d\n", array[0], array[count-1]);
}
