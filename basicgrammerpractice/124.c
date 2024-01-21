#include <stdio.h>

int l[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
	int y, m, d;
	scanf("%d %d %d", &y, &m, &d);
	int tm = (m + 1) % 12 + 1;
	while(1)
	{
		if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
		{
			l[1] = 29;
		}
		else
		{
			l[1] = 28;
		}

		d+=7;
		if (d > l[m-1])
		{
			d %= l[m-1];
			m++;
		}
		if (m > 12)
		{
			m = 1;
			y++;
		}
		if(m == tm) break;
	}
	printf("%d %d %d", y, m, d);
}