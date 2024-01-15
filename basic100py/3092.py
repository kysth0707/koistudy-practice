a=int(input())
for i in range(1,a+1):
	print('X' if i % 10 != 0 and (i % 10) % 3 == 0 else i, end=' ')