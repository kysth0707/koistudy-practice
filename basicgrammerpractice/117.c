#include <stdio.h>

int isPrime(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++)
	{
		if(isPrime(i))
		{
			sum += i;
		}
	}
	printf("%d", sum);
}