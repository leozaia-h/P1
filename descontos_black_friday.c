#include <stdio.h>

int main()
{
	double valor_int, valor_desc;
	int count = 0;

	while(scanf("%lf%lf", &valor_int, &valor_desc) != EOF)
	{
		if(valor_desc <= (valor_int - (valor_int * 0.2)))
		{
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}
