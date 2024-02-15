def f(a,*b,c):
    print(a,b,c)

print(f(1,2,3,c=4))
# *b 뒤에는 무조건 받는 값이 Keyword argument값 이여야한다.