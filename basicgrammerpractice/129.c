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

int getReversedNum(int n)
{
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
	return output;
}

int isPalindrome(int n)
{
	int len = 1, a = n;
	while(1)
	{
		if (a / 10 < 1) break;
		len++;
		a /= 10;
	}

	char buf[100];
	sprintf(buf, "%d", n);

	for(int i = 0; i < len / 2 + len % 2; i++)
	{
		if(buf[i] != buf[len-i-1])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n, t = 0;
	scanf("%d", &n);

	while(1)
	{
		if (isPalindrome(n))
		{
			break;
		}
		t++;
		n = n + getReversedNum(n);
	}
	printf("%d %d", t, n);
}