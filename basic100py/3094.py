# a,b,c,d=map(int,input().split())
# print(f"{round(a*b*c*d/(1<<23), 1)} MB")
# 
# 이렇게 하면 에러가 난다!
# 저지에서 인식이 안 되는 규칙이 있다고 한다!!
# 
# 그래서 찾아보니 f-string이 안된다   이거 ->  f"{변수}"
# 그래서 %를 이용했다

a,b,c,d=map(int,input().split())
print("%.1f MB"%(a*b*c*d/(1<<23)))