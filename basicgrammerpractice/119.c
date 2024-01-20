#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < 2 * n - 1; i++)
	{
		printf("*");
	}
}