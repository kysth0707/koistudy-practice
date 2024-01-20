#include <stdio.h>

int main()
{
	long long int a;
	scanf("%lld", &a);
	printf("%s", a % 2 == 0 ? "even" : "odd");
}