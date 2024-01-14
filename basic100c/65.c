#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%s\n", (a % 2 == 0) ? "even" : "odd");
	printf("%s\n", (b % 2 == 0) ? "even" : "odd");
	printf("%s", (c % 2 == 0) ? "even" : "odd");
	return 0;
}