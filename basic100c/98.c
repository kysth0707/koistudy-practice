#include <stdio.h>

int main()
{
	int map[10][10] = {0,}, x = 1, y = 1;

	for(int y = 0; y < 10; y++)
	{
		for(int x = 0; x < 10; x++)
		{
			scanf("%d", &map[y][x]);
		}
	}

	map[1][1] = 9;
	while(1)
	{
		if(map[y][x + 1] == 0 || map[y][x + 1] == 2) { x++; }
		else { y++; }

		if(map[y][x] == 1) { break; }
		if(map[y][x] == 2)
		{
			map[y][x] = 9;
			break;
		}
		map[y][x] = 9;
	}
	
	

	for(int y = 0; y < 10; y++)
	{
		for(int x = 0; x < 10; x++)
		{
			printf("%d ", map[y][x]);
		}
		printf("\n");
	}


	return 0;
}