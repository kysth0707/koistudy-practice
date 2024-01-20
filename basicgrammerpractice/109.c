#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (b > c)
	{
		int temp = c;
		c = b;
		b = temp;
	}

	if (a > c)
	{
		int temp = c;
		c = a;
		a = temp;
	}

	if(a + b <= c)
		printf("Not");
	else if (a == b && b == c)
		printf("Regular");
	else if (a * a + b * b == c * c)
		printf("Right");
	else if (a == b || b == c || c == a)
		printf("Isosceles");
	else
		printf("Normal");
}