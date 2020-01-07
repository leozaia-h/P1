#include <stdio.h>
#include <string.h>

int main()
{
	double nota, acima_media, quantidade = 0;
	int k, i, j=0, aluno, array[999], maior, notas[999];
	char gabarito[10], resposta[10];

	for(i = 0; i < 10; i++) scanf(" %c", &gabarito[i]);

	while(scanf("%d", &aluno) != EOF)
	{
		nota = 0;
		if(aluno != 9999)
		{
			for(i = 0; i < 10; i++) scanf(" %c", &resposta[i]);

			for(k = 0; k < 10; k++) if(resposta[k] == gabarito[k])  nota++;

			printf("%d %.1lf\n", aluno, nota);

			if(nota >= 6) acima_media++;

			notas[j] = nota;

			quantidade++;
		}

		j++;
	}
//	printf("%.2lf  %.2lf\n", acima_media, quantidade);

	if(acima_media <= quantidade)printf("%.1lf%%\n", (acima_media / (quantidade)) * 100.0);
	else printf("%.1lf%%\n", ((acima_media - 1) / quantidade) * 100);

	if(quantidade > 1)
	{
		for(i = 0; i < (quantidade); i++)
		{
			array[i] = 0;
			for(k = 0; k < (quantidade);k++) if(i != k && notas[i] == notas[k]) array[i]++;
		}
	}
	else maior = notas[0];

	for(i = 0; i < (quantidade); i++) if(array[i] > maior) maior = notas[i];

	printf("%d.0\n", maior);

	return 0;
}
