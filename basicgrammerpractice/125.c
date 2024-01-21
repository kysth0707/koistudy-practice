#include <stdio.h>

int _3np1(int n)
{
	int i = 1;
	while (n != 1)
	{
		if (n % 2 == 0) n /= 2;
		else n = 3 * n + 1;
		i++;
	}
	return i;
}

int main()
{
	int a, b, max = -999;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	for(int i = a; i <= b; i++)
	{
		int o = _3np1(i);
		if (o >= max)
		{
			max = o;
		}
	}
	printf("%d", max);
}