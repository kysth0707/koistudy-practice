a=[[0 for j in range(19)] for i in range(19)]
for _ in range(int(input())):
	y,x=map(int,input().split())
	a[y-1][x-1]=1
for x in a:
	print(*x)

# x, y / x, y 를 헷갈리지 말자!
# 출력할 때 순서를 잘 알아야한다

# 이 코드로 py숏코딩 1등을 달성할 수 있다 (2024.01.16 기준)

# print(*[*x for x in a])
# 어? 왜 이건 안되지? 라고 생각할 수 있다
# 그냥 파이썬에서 가독성 문제로 PEP448에서 제외되었다고 한다!