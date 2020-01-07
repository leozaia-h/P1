#include <stdio.h>

int main()
{
	int quantidade_jogos, i, j;

	scanf("%d", &quantidade_jogos);

	double dificuldade[999], preco[999], preco_flex[999];

	for(i = 0; i < quantidade_jogos; i++)
	{
		scanf("%lf%lf", &dificuldade[i], &preco[i]);
	}
	for(i = 0; i < quantidade_jogos; i++)
	{
	    preco_flex[i] = preco[i];
	}
	for(j = 0; j < 3; j++)
	{
		for(i = 0; i < quantidade_jogos; i++)
		{
			if(preco[i] > 100)
			{
				if(dificuldade[i] == 0) preco[i] -= (preco[i] * 0.25);
				else if(dificuldade[i] == 1) preco[i] -= (preco[i] * 0.20);
				else if(dificuldade[i] == 2) preco[i] -= (preco[i] * 0.18);
				else if(dificuldade[i] == 3) preco[i] -= (preco[i] * 0.15);
				else if(dificuldade[i] == 4) preco[i] -= (preco[i] * 0.12);
				else  preco[i] -= (preco[i] * 0.1);
			}

			else if(preco[i] >= 50.625)
			{
				if(dificuldade[i] == 0) preco[i] -= (preco[i] * (0.5*0.25));
                else if(dificuldade[i] == 1) preco[i] -= (preco[i] * (0.5*0.20));
                else if(dificuldade[i] == 2) preco[i] -= (preco[i] * (0.5*0.18));
                else if(dificuldade[i] == 3) preco[i] -= (preco[i] * (0.5*0.15));
                else if(dificuldade[i] == 4) preco[i] -= (preco[i] * (0.5*0.12));
				else preco[i] -= (preco[i] * (0.5*0.1));
			}

			else if(preco_flex[i] < 45) preco[i] = preco_flex[i];
			else preco[i] = 45;
		}
	}

	for(i = 0; i < quantidade_jogos; i++)
	{
		printf("Jogo[%d] = R$%.2lf\n", i, preco[i]);
	}

	return 0;
}
