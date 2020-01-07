#include <stdio.h>

int main()
{
	int array[10], i, procurado, count=0;

	for(i = 0; i < 10; i++) scanf("%d", &array[i]);
	scanf("%d", &procurado);

	for(i = 0; i < 10; i++)
	{
		if(array[i] == procurado) count++;
	}

	printf("%d\n", count);
}
