#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int y = 0; y < n; y++)
	{
		for(int x = 0; x < n; x++)
		{
			if(y%2)
				printf("%d ",y*n+x+1);
			else
				printf("%d ",y*n-x+n);
		}
		puts("");
	}
}