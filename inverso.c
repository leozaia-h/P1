#include <stdio.h>

int main()
{
	int N, array[999], i;

	scanf("%d", &N);

	for(i = 0; i < N; i++) scanf("%d", &array[i]);

	for(i = N-1; i >= 0; i--) printf("%d ", array[i]);

	printf("\n");
}
