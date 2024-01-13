#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	char b[7] = "";
	scanf("%d.%s", &a, &b);
	if(atoi(b) == 0)
	{
		printf("%d\n0", a);
	}
	else
	{
		printf("%d\n%s", a ,b);
	}
	return 0;
}