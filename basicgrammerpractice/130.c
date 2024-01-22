#include <stdio.h>

int main()
{
	int n;
	long long int a = 0, b = 1;
	scanf("%d", &n);
	if (n <= 1)
	{
		printf("1");
		return 0;
	}

	for(int i = 1; i < n; i++)
	{
		long long int temp = a + b;
		a = b;
		b = temp;
	}
	printf("%lld", b);
}