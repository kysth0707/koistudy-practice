#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int y = 0; y < n; y++)
	{
		for(int x = 0; x < n; x++)
		{
			if (x % 2)
				printf("%d ",x*n+y+1);
			else
				printf("%d ",x*n-y+n);
		}
		puts("");
	}
}