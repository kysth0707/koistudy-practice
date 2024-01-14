#include <stdio.h>

int main()
{
	int n, x, y;
	int map[20][20] = {0,};

	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		map[y - 1][x - 1] = 1;
	}
	for(y = 0; y < 19; y++)
	{
		for(x = 0; x < 19; x++)
		{
			printf("%d ", map[x][y]);
		}
		printf("\n");
	}

	return 0;
}