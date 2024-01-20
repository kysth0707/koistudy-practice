#include <stdio.h>

int main()
{
	int n, g, m[100] = {0,};
	scanf("%d %d", &n, &g);

	int j = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m[j]);
		j++;
		if (j >= g)
			j = 0;
		if (j == 0)
		{
			int max = -9999;
			for(int k = 0; k < g; k++)
			{
				if (m[k] > max)
					max = m[k];
			}
			printf("%d ", max);
		}
	}
	if (j != 0)
	{
		int max = -9999;
		for(int k = 0; k < n % g; k++)
		{
			if (m[k] > max)
				max = m[k];
		}
		printf("%d ", max);
	}
}