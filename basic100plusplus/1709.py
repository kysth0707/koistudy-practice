n=int(input())
for y in range(n):
	print(*[x+y*n+1 for x in range(n)])

# 이 코드로 py숏코딩 1등을 달성할 수 있다 72Byte (2024.01.16 기준)
	
# 때때로 기본적인 코드가 무조건 한 줄로 만드는 것보다 더 나을 때가 있다


# n=int(input())
# print(*[' '.join([str(x+y*n+1) for x in range(n)]) for y in range(n)],sep='\n')
	

# n=int(input())
# for y in range(n):
# 	for x in range(n):
# 		print(x+y*n+1, end=' ')
# 	print()