#include <stdio.h>

int main()
{
	int n, d[4] = {0, }, sum;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < 4; scanf("%d", &d[j++]));
		sum = 0;
		for(int j = 0; j < 4; sum+=d[j++]);
		switch (sum)
		{
			case 1: printf("D "); break;
			case 2: printf("K "); break;
			case 3: printf("G "); break;
			case 4: printf("U "); break;
			case 0: printf("M "); break;
		}
	}
}