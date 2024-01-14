#include <stdio.h>

int main()
{
	int n, b, min = 10000;

	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &b);
		if(b < min)
		{
			min = b;
		}
	}
	printf("%d", min);

	return 0;
}