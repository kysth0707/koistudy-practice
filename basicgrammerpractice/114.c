#include <stdio.h>


int main()
{
	int a[4];
	for(int i = 0; i < 4; scanf("%d", &a[i++]));
	int last = -1;
	for(int i = 1; i <= 100; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			if (a[j] == i)
			{
				int v = (j <= 1) ? 1 : 0;
				if (last == v)
				{
					printf("not cross");
					return 0;
				}
				last = v;
			}
		}
	}
	printf("cross");
}