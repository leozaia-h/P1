#include <stdio.h>

int main()
{
	int valores, numeros_matriz[3][3], i, j, delta, soma_diagonal = 0, maior;
	double media;

	for(i = 0; i < 3; i++) for(j = 0; j < 3; j++) scanf("%d", &numeros_matriz[i][j]);

//	printf("%d\n", numeros_matriz[0][0]);

	maior = numeros_matriz[0][0];

	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
		{
			valores += numeros_matriz[i][j];

			if(maior < numeros_matriz[i][j]) maior = numeros_matriz[i][j];

			if(maior > 0) delta = 1;
			else if(maior < 0) delta = -1;
			else delta = 0;
		}

	media = valores / (double)9;

	for(i = 0; i < 3; i++) for(j = 0; j < 3; j++) if(i == j) soma_diagonal += numeros_matriz[i][j];

	printf("%.2lf %d %d %d\n", media, maior, delta, soma_diagonal);

	return 0;
}
