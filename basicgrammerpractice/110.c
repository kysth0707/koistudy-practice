#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a <= 168)
		printf("CRASH %d", a);
	else if (b <= 168)
		printf("CRASH %d", b);
	else if (c <= 168)
		printf("CRASH %d", c);
	else
		printf("NO CRASH");
}