#include <stdio.h>

int main()
{
	int num1, num2, x, i, ciclo = 0;

	while(scanf("%d%d", &num1, &num2) != EOF)
	{
		for(i = num1; i <= num2; i++)
		{
			x = i;
			while(x != 1)
			{
				ciclo++;
				if(x % 2 == 0)	x = x/2;
				else x = (x * 3) + 1;
				//printf("[%d]", x);
			}
		printf("##%d\n", ciclo);
		}
		printf("%d\n", ciclo);
	}
}
