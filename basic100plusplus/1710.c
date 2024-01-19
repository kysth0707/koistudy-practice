#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int y = 0; y < n; y++)
	{
		for(int x = 0; x < n; x++)
		{
			printf("%d ",n-x+y*n);
		}
		puts("");
	}
}