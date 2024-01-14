#include <stdio.h>

int main()
{
	int h, w, n, l, d, x, y, map[100][100] = {0,};
	
	scanf("%d %d", &h, &w);
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &l, &d, &y, &x);
		for(int j = 0; j < l; j++)
		{
			if(d == 0)
			{
				map[y - 1][x - 1 + j] = 1;
			}
			else
			{
				map[y - 1 + j][x - 1] = 1;
			}
		}
	}

	for(int y = 0; y < h; y++)
	{
		for(int x = 0; x < w; x++)
		{
			printf("%d ", map[y][x]);
		}
		printf("\n");
	}


	return 0;
}