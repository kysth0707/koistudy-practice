#include <stdio.h>

int main()
{
	char a, b = 'a';

	scanf("%c", &a);
	
	printf("a ");
	while(!(a == b))
	{
		b++;
		printf("%c ", b);
	}

	return 0;
}