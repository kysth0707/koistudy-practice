#include <stdio.h>

int main()
{
	int d[4] = {0, };
	scanf("%d %d %d", &d[0], &d[1], &d[2]);
	for(int j = 0; j < 3; j++)
	{
		for(int i = 0; i < 3; i++)
		{
			if (d[i] > d[j])
			{
				int temp = d[i];
				d[i] = d[j];
				d[j] = temp;
			}
		}
	}
	if (d[0] == d[1] || d[1] == d[2])
	{
		printf("Impossible");
		return 0;
	}
	for(int i = 0; i < 3; i++)
	{
		printf("%d ", d[i]);
	}
}