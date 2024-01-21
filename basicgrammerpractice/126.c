#include <stdio.h>

int main()
{
	int n, a, minPos, minVal = 9999999, maxPos, maxVal = -9999999;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a > maxVal)
		{
			maxPos = i+1;
			maxVal = a;
		}
		if (a < minVal)
		{
			minPos = i+1;
			minVal = a;
		}
	}
	printf("%d : %d\n", maxPos, maxVal);
	printf("%d : %d", minPos, minVal);
}