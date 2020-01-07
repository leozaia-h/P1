#include <stdio.h>

void MULTIPLOS(int num1, int num2, int array[])
{
	int i;

	for(i = 1; i <= 50; i++)
	{
		if(i % num1 == 0 && i % num2 == 0)
		{
			array[i] = i;
		}
	}
}

int main()
{
	int i, array[50], num1, num2, quantidade = 0;

	scanf("%d%d", &num1, &num2);

	for(i = 0; i <= 50; i++)
	{
		array[i] = 0;
	}

	MULTIPLOS(num1, num2, array);

	for(i = 0; i < 50; i++)
	{
		//printf("[%d]", array[i]);
		if(array[i] != 0)
		{
			//printf("[%d]", array[i]);
			quantidade++;;
		}
	}

	printf("%d\n", quantidade);
}
