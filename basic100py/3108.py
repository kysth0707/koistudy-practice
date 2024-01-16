a=[input().split() for _ in range(10)]
x,y=1,1
a[1][1]=9
while 1:
	if a[y][x+1] in ['0','2']:
		x+=1
	else:
		y+=1
	c=a[y][x]
	if c in ['1','2']:
		if c=='2':
			a[y][x]=9
		break
	a[y][x]=9
for x in a:
	print(*x)

# 이 코드로 py숏코딩 1등을 달성할 수 있다 (2024.01.16 기준)