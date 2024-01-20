#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if (n != 1)
	{
		for(int i = 1; i <= 9; i++)
		{
			printf("%d*%d=%d\n", n, i, n * i);
		}
	}
	else
	{
		for(int j = 1; j <= 9; j++)
		{
			for(int i = 2; i <= 9; i++)
			{
				printf("%d*%d=%d ", i, j, j * i);
			}
			puts("");
		}
	}
}