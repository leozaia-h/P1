#include <stdio.h>
#include <math.h>

int vitoria(int d1, int v2, int round_maximo)
{
	int i;

	for(i = 0; i <= round_maximo; i++)
	{
		if((round_maximo - i) * (d1 + 50*i) >= v2)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int d1, d2, v1, v2, i, batalhas, round_maximo;

	scanf("%d", &batalhas);

	for(i = 0; i < batalhas; i++)
	{
		scanf("%d%d%d%d", &v1, &v2, &d1, &d2);

		round_maximo = ceil((double)v1 / d2);

		if(vitoria(d1, v2, round_maximo))
		{
			printf("Clodes\n");
		}
		else
		{
			printf("Bezeliel\n");
		}

		return 0;
	}

}
