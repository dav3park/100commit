# def cal(a):
#     global b
#     b = 4
#     def minus(a=2):
#         b=5
#     b=minus(a)
#
# a,b=1,2
# cal(a)
# print(a,b)

def cal(a):
    b = 4
    def minus(a=2):
        nonlocal b
        b = 5
        return b
    b = minus(a)

a,b =1,2
cal(a)
print(a,b)

