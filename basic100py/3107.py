h,w=map(int,input().split())
a=[[0 for i in range(w)] for i in range(h)]
for _ in range(int(input())):
	l,d,x,y=map(int,input().split())
	for i in range(l):
		if d:
			a[x-1+i][y-1]=1
		else:
			a[x-1][y-1+i]=1
for x in a:
	print(*x)

# 이 코드로 py숏코딩 1등을 달성할 수 있다 (2024.01.16 기준)