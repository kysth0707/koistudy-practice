#include <stdio.h>

int pow10it(int a)
{
	int s = 1;
	for(int i = 0; i < a; i++)
	{
		s *= 10;
	}
	return s;
}

int main()
{
	int n;
	scanf("%d", &n);

	int len = 1, a = n;
	while(1)
	{
		if (a / 10 < 1) break;
		len++;
		a /= 10;
	}
	int output = 0;
	for (int i = 0; i < len; i++)
	{
		output += (n % pow10it(i+1) / pow10it(i)) * pow10it(len-i-1);
	}
	printf("%d", output);
}