#include <stdio.h>

int main()
{
	int k, n, d[101] = {0, }, s, e, u, sum = 0;
	scanf("%d %d", &k, &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &s, &e, &u);
		s-=1;
		e-=1;
		d[s] = d[s] + u;
		d[e + 1] = d[e + 1] - u;
	}
	for(int i = 0; i < k; i++)
	{
		printf("%d ", d[i]);
	}
	puts("");
	for(int i = 0; i < k; i++)
	{
		sum += d[i];
		printf("%d ", sum);
	}
}