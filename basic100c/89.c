#include <stdio.h>
#include <math.h>

int main()
{
	int a, r, n;
	scanf("%d %d %d", &a, &r, &n);
	printf("%.0f", a * pow((double)(r), (double)(n - 1)));
	return 0;
}