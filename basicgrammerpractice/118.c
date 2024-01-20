#include <stdio.h>

int Euclidean(int a, int b)
{
	if (b == 0)
		return a;
	else
		return Euclidean(b, a % b);
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	printf("%d", Euclidean(a, b));
}