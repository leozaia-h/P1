#include <stdio.h>
/*
int LADO_1(char posicao)
{
}
*/

int main()
{
	int moeda, posicao, tamanho, i;
	char array[1000];

	scanf("%d", &tamanho);

	for(i = 0; i < tamanho; i++)
	{
		scanf("\n%c", &array[i]);

	}

	if(tamanho > 2)
	{

		for(i = 0; i < tamanho-2; i++)
		{
			if(array[i] == 'D')
			{
				posicao += 1;
			}
			else
			{
				posicao -= 1;
			}

			if(posicao == 1)
			{
				if(array[i+1] == 'C' && array[i+2] == 'C')
				{
					moeda++;
				}
			}
			else if(posicao == -1)
			{
				if(array[i+1] == 'D' && array[i+2] == 'D')
				{
					moeda++;
				}
			}
		}
		printf("%d", moeda);
	}
	else printf("0");
}
