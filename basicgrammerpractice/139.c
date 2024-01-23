#include <stdio.h>
#include <string.h>

int main()
{
	char a[50];
	fgets(a, 50, stdin);
	for(int i = strlen(a) - 1; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
}