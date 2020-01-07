#include <stdio.h>

int main()
{
	char array[999], i=0, count=0;

	while(scanf(" %c", &array[i]) != EOF)
	{
		count++;
		i++;
	}

	for(i = count-1; i >= 0; i--) printf("%c", array[i]);

	printf("\n");
}

