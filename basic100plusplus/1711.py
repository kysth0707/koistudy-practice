n=int(input())
for y in range(n):
	print(*[y+x*n+1 for x in range(n)])

# 이 코드로 py숏코딩 1등을 달성할 수 있다 72Byte (2024.01.16 기준)