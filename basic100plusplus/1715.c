#include <stdio.h>
int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	for(int y = 0; y < m; y++)
	{
		for(int x = 0; x < n; x++)
		{
			printf("%d ",-y-x*m+n*m);
		}
		puts("");
	}
}