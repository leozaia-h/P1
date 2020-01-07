#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i, buracos, buracos_indice[10000], buracos_conteudo[10000], array[10000], especie = 0;

	scanf("%d", &buracos);

	for(i = 0; i < buracos; i++) scanf("%d", &buracos_conteudo[i]);
	//for(i = 0; i < buracos; i++) buracos_indice[i] = i;

	for(i = 0; i < buracos; i++) array[i] = 0;

	for(i = 0; i < buracos; i++)
	{
		for(j = 0; j < buracos; j++)
		{
			if(buracos_conteudo[i])
		}
	}

	printf("%d\n", especie);
}
