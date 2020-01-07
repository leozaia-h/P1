#include <stdio.h>
#include <math.h>

int main()
{
	int i, elementos;
	double S=0, array_2[999], array_impares[999], array_3[999];

	scanf("%d", &elementos);

	for(i = 0; i < elementos; i++)
	{
		array_2[i] = pow(2, i);
//printf("%lf\n", array_2[i]);
	}
	for(i = 1; i < elementos; i += 2)
	{
		array_impares[i] = i;
//printf("%lf\n", array_impares[i]);
	}
	for(i = 1; i < elementos; i++)
	{
		array_3[i] = 3*i;
//printf("%lf\n", array_3[i]);
	}

	for(i = 1; i < elementos; i++)
	{
		if(i % 2 == 0) S += (array_2[i-1] / 3*(i));
		else S += ((i) / array_2[i-1]);
		printf("#%lf\n@@@@@%lf\n", 3, 3);
	}

	printf("%.2lf\n", S);

	return 0;
}
