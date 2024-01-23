#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n, a[11] = {0, }, b, c;
	scanf("%d", &n);

	srand(time(NULL));
	for(int i = 0; i < n; i++)
	{
		a[rand()%6 + rand()%6]++;
	}
	for(int i = 0; i < 11; i++)
	{
		printf("%d ", a[i]);
	}
}