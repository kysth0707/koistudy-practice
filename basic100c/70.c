#include <stdio.h>

int main()
{
	int a;
	ask:
		scanf("%d", &a);

		if (a != 0)
		{
			printf("%d\n", a); 
			goto ask;
		}
	
	return 0;
}