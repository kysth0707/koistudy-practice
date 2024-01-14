#include <stdio.h>

int main()
{
	int n, a[24] = {0, }, b;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &b);
		a[b] += 1;
	}

	for(int i = 1; i < 24; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}