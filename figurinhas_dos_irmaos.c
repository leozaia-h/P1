#include <stdio.h>

int main()
{
	int quantidade, figurinha[10000], i, joao = 0, maria = 0, soma_joao = 0, soma_maria = 0, j;

	scanf("%d", &quantidade);

	for(i = 0; i < quantidade; i++) scanf("%d", &figurinha[i]);

	for(i = 0; i < quantidade; i++)
	{
		if(figurinha[i] % 2 == 0) joao++;
		else maria++;
	}

	for(i = 0; i < quantidade; i++)
	{
		for(j = 0; j < quantidade; j++)
		{
			if(i != j && figurinha[i] == figurinha[j]) figurinha[i] = 0;
		}
	}

	for(i = 0; i < quantidade; i++)
	{
		if(figurinha[i] % 2 == 0) soma_joao += figurinha[i];
		else soma_maria += figurinha[i];
	}

	if(soma_joao > soma_maria) printf("%d\n%d\n%d\n", joao, maria, soma_joao);
	else printf("%d\n%d\n%d", joao, maria, soma_maria);
}
