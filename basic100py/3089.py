a = int(input())
s = 0
for i in range(a):
	s += i + 1
	if s >= a:
		print(i + 1)
		break