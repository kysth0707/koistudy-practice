m,n=map(int,input().split())
for y in range(m):
	print(*[-y-x*m+n*m for x in range(n)])

# 이 코드로 py숏코딩 1등을 달성할 수 있다 89Byte (2024.01.16 기준)