#include <stdio.h>

int main()
{
	double preco=0, preco_arvore, quantidade_enfeite[999], preco_enfeite[999];
	int i=0, count=0;

	scanf("%lf", &preco_arvore);

	while(scanf("%lf%lf", &quantidade_enfeite[i], &preco_enfeite[i]) != EOF)
	{
		i++;
		count++;
	}

	for(i = 0; i < count; i++)
	{
		preco += (preco_enfeite[i] * quantidade_enfeite[i]);
	}
	preco += preco_arvore;

	printf("%.2lf\n", preco);
	printf("%.2lf\n", preco / 21);
}
