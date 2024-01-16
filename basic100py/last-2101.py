import sys
k,m=map(int,input().split())
s=input()
for _ in range(int(input())):
	a,b,c=map(int,sys.stdin.readline().rstrip().split())
	s=s[:c]+s[a:b]+s[c:]
	s=s[:m]
print(s[:k])
# 왜 안됨???