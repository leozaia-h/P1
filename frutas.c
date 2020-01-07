#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int testes, count = 0, i, j;
	double gasto = 0, gasto_total = 0;
	char fruta[999];

	scanf("%d", &testes);
	for(j = 0; j < testes; j++)
	{
		scanf("%lf", &gasto);
		gets(fruta);

		for(i = 0; fruta[i] != NULL; i++)
		{
			if(fruta[i] == ' ') count++;
		}
	}
	printf("%d", count);

	return 0;
}
