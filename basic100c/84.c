#include <stdio.h>

int main()
{
	long int h, b, c, s;
	scanf("%ld %ld %ld %ld", &h, &b, &c, &s);
	printf("%.1Lf MB", (long double)(h * b * c * s) / 8 / 1024 / 1024);

	return 0;
}