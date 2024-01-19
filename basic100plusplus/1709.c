#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int y = 0; y < n; y++)
	{
		for(int x = 0; x < n; x++)
		{
			printf("%d ",x+y*n+1);
		}
		puts("");
	}
}

// 신기한 C의 숏코딩 (주의! 코이 스터디에서는 작동을 안 한다)
// x,y;main(n){for(scanf("%d", &n);y++<n;x=puts("")){for(;x<n; printf("%d ",y*n-n+1+x++));}}