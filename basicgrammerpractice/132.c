#include <stdio.h>

int main()
{
	int n, a[1000], sum = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("%d\n", sum);
	printf("%.2f", sum / (double)(n));
}