#include <stdio.h>

int main()
{
	int n, a[5000];
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for(int y = 0; y < n; y++)
	{
		for(int x = 0; x < n; x++)
		{
			if (a[x] > a[y])
			{
				int temp = a[x];
				a[x] = a[y];
				a[y] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}