#include <stdio.h>

int main()
{
	int n, k, len, a[10000];
	scanf("%d %d", &n, &k);

	for(len = 0; n > 0; len++)
	{
		a[len] = n % k;
		n = n / k;
	}
	for(int i = 0; i < len; i++)
	{
		int v = a[len-i-1];
		if (v < 10)
			printf("%d", v);
		else
			printf("%c", 65 + v - 10);
	}
}