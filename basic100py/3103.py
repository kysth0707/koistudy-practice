input()
print(*input().split()[::-1])

# 숏코딩이 무조건 빠른 건 아니다
# 하지만 파이썬은 조금 느리기 때문에
# 같은 동작을 하는 코드더라도 사용한 구문에 시간 영향을 받는다

# 이 구문으로 py숏코딩 압도적인 1등 (!!) 을 달성할 수 있다. 38Byte! (2024.01.16 기준)
# * (Asterisk) 를 붙이면 [1, 2, 3] 이 1 2 3 으로 풀려서 출력된다.