#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	double r = (double)(a) / 2;
	printf("%.2f", r * r * 3.14);
}