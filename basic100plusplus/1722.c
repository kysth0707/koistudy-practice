#include <stdio.h>
int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	int i = n * m;
	for(int y = 0; y < m; y++)
	{
		for(int x = 0; x < n; x++)
		{
			if (y % 2 != m % 2)
				printf("%d ", i - n + x + 1); //U
			else
				printf("%d ", i - x); //D
		}
		puts("");
		i -= n;
	}
}