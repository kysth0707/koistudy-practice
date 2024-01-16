input()
a=list(map(int,input().split()))
print(*[a.count(i+1) for i in range(23)])

# 위 코드로 py숏코딩 1등을 달성할 수 있다 (2024.01.06 기준)