m,n=map(int,input().split())
for y in range(m):
	print(*[-y*n+x-n+n*m+1 for x in range(n)])

# 이 코드로 py숏코딩 1등을 달성할 수 있다 93Byte (2024.01.16 기준)