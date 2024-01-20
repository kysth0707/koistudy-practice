#include <stdio.h>

int main()
{
	int n, x1, x2, flag = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", flag ? &x1 : &x2);
		flag = !flag;
		if(i % 2 != 0)
			printf("%d ", (x1 < x2) ? x1 : x2);
	}
}