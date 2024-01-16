a=[list(map(int,input().split())) for _ in range(19)]
for _ in range(int(input())):
	x,y=map(int,input().split())
	for i in range(19):
		a[i][y-1]=0 if a[i][y-1] else 1
		a[x-1][i]=0 if a[x-1][i] else 1
for x in a:
	print(*x)

# 이 코드로 py숏코딩 1등을 달성할 수 있다 (2024.01.16 기준)