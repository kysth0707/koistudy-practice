#include <stdio.h>

int main()
{
	long long int a;
	scanf("%lld", &a);
	printf("%s", a % 400 == 0 | (a % 4 == 0 && a % 100 != 0) ? "Leap" : "Normal");
}