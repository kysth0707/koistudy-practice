#include <stdio.h>

int main()
{
	int n, k, a;
	scanf("%d %d", &n, &k);

	int exit = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a == k)
		{
			printf("%d", i+1);
			exit = 1;
			break;
		}
	}
	if (exit == 0)
	{
		printf("-1");
	}
}