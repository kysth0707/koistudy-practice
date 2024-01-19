#include <stdio.h>
int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	for(int y = 0; y < m; y++)
	{
		for(int x = 0; x < n; x++)
		{
			printf("%d ",-y*n+x-n+n*m+1);
		}
		puts("");
	}
}