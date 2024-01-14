#include <stdio.h>

int main()
{
	int n, x, y;
	int map[20][20] = {0,};

	for(y = 0; y < 19; y++)
	{
		for(x = 0; x < 19; x++)
		{
			scanf("%d", &map[y][x]);
		}
	}


	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);

		for(int j = 0; j < 19; j++)
		{
			map[x - 1][j] = !map[x - 1][j];
			map[j][y - 1] = !map[j][y - 1];
		}
	}


	for(int y = 0; y < 19; y++)
	{
		for(int x = 0; x < 19; x++)
		{
			printf("%d ", map[y][x]);
		}
		printf("\n");
	}


	return 0;
}