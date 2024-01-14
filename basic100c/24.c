#include <stdio.h>

int main()
{
	int a, c = 10000;
	scanf("%d", &a);
	for(int i = 0; i < 5; i++)
	{
		printf("[%d]\n", (a/c)%10 * c);
		c /= 10;
	}
	return 0;
}