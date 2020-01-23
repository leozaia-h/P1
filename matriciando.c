#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i, j, matriz_x, matriz_y, maior_diagonal_dec, maior_diagonal_cres, soma_diagonal_p = 0, dif_diagonal_s = 0, maior_matriz = -9999;

	scanf("%d%d", &matriz_x, &matriz_y);
    
    //erro
	if(matriz_x != matriz_y || (matriz_x < 2 && matriz_y < 2))
	{
		printf("erro");

		return 0;
	}

	int matriz[matriz_x][matriz_y], maior_linha[matriz_x], maior_coluna[matriz_y],  m = 0;

    //input dos valores
	for(i = 0; i < matriz_x; i++)
		for(j = 0; j < matriz_y; j++)
			scanf("%d", &matriz[i][j]);

    //MAIOR VALOR DA LINHA
	for(i = 0; i < matriz_x; i++)
	{
		m = -9999;
		for(j = 0; j < matriz_y; j++)
			if(matriz[i][j] >= m)
			{
				m = matriz[i][j];
				maior_linha[i] = matriz[i][j];
			}
	}
	printf("[%d", maior_linha[0]);

	for(i = 1; i < matriz_x; i++)
		printf(", %d", maior_linha[i]);

	printf("]\n");
	
    //MAIOR VALOR DA COLUNA
	for(j = 0; j < matriz_y; j++)
	{
		m = -9999;
		for(i = 0; i < matriz_x; i++)
			if(matriz[i][j] >= m)
			{
				m = matriz[i][j];
				maior_coluna[j] = matriz[i][j];
			}
	}

	printf("[%d", maior_coluna[0]);

	for(i = 1; i < matriz_y; i++)
		printf(", %d", maior_coluna[i]);

	printf("]\n");

	//MAIOR DA MATRIZ
	for(i = 0; i < matriz_x; i++)
		for(j = 0; j < matriz_y; j++)
			if(matriz[i][j] > maior_matriz)
			    maior_matriz = matriz[i][j];
			    
	printf("%d\n", maior_matriz);

	//SOMA DIAGONAL PRINCIPAL
	for(i = 0; i < matriz_x; i++)
		if(matriz[i][i] > 0)
			soma_diagonal_p += matriz[i][i];

	printf("%d\n", soma_diagonal_p);

	//DIFEREN?A DIAGONAL SECUNDARIA
	dif_diagonal_s = matriz[0][matriz_y-1];
	j = matriz_y-2;;
	for(i = 1; i < matriz_x; i++)
	{
	    dif_diagonal_s -= matriz[i][j];
        j--;
    }    

	printf("%d\n", dif_diagonal_s);

	return 0;
}
