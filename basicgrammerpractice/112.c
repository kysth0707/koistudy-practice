#include <stdio.h>

int main()
{
	int r, e, c;
	scanf("%d %d %d", &r, &e, &c);

	if(r < e - c)
		printf("advertise");
	else if(r == e - c)
		printf("does not matter");
	else
		printf("do not advertise");
}