#include <stdio.h>

int main()
{
	int passou_limite = 0, i, contador, excedeu = 0, max_pessoas, entrou, saiu, dentro = 0;

	scanf("%d%d", &contador, &max_pessoas);

	for(i = 0; i < contador; i++)
	{
		scanf("%d%d", &saiu, &entrou);

		dentro += (entrou - saiu);

		printf("#%d\n", dentro);

		if(dentro > max_pessoas)
		{
			passou_limite++;
		}
	}
	if(passou_limite == 0)	printf("N");
	else printf("S");

	return 0;
}
