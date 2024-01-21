#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	int n1 = a, n2 = b, n3 = 0;
	while (n1 != 0)
	{
		if (n1 % 2 != 0)
		{
			n3 += n2;
		}
		n1 = n1 >> 1;
		n2 = n2 << 1;
	}
	printf("%d", n3);
}