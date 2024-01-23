#include <stdio.h>
int main(){
	int n, a[100][100] = {0, };
	scanf("%d", &n);

	int x = -1, y = 0, rot = 0; //0,1,2,3 각각 우하좌상 (시계방향 회전)
	
	//544332211
	int b = n;
	int c = 0;
	int flag = 1;
	for(int i = 0; i < n*n; i++)
	{
		c++;
		switch (rot)
		{
			case 0: x++; break;
			case 1: y++; break;
			case 2: x--; break;
			case 3: y--; break;
		}
		a[y][x] = i + 1;
		if (c >= b)
		{
			c = 0;
			rot=(rot+1)%4;
			if(flag == 1)
				b-=1;
			flag = !flag;
		}
	}

	for(int y = 0; y < n; y++)
	{
		for(int x = 0; x < n; x++)
		{
			printf("%d ", a[y][x]);
		}
		puts("");
	}
}