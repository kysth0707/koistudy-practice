# a,b,c=map(int,input().split())
# print(f"{round(a*b*c/(1<<23), 2)} MB")
# 
# 이렇게 하면 에러가 난다!
# 저지에서 인식이 안 되는 규칙이 있다고 한다!!
# 
# 그래서 찾아보니 f-string이 안된다   이거 ->  f"{변수}"
# 그래서 %를 이용했다
# 
# %f 를 쓰면 소숫점이 다 보이니 %s로 출력하면 알아서 소숫점 밑을 잘라준다
# 0.00000 -> 0.0

a,b,c=map(int,input().split())
print("%s MB"%(round(a*b*c/(1<<23), 2)))