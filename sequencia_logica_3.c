#include <stdio.h>

int main()
{
	int x, y, z, i, count = 0;

	scanf("%d%d%d", &x, &y, &z);

	for(i = 1; i < y; i += z)
	{
		count++;
		if(count % x == 0) printf("%d\n", i);
		else printf("%d ", i);
	}

	return 0;
}

