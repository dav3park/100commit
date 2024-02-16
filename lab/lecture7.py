def function4(a, *b):
    total = 0
    for i in b:
        total += i
    return total


# result = function4(1, 2, 3)
# print(result)  # 5
# result = function4(1, 2, 3, 4, 5)
# print(result)  # 14

def function5(a,*value,**info):
    sum = 0
    for i in value:
        sum += i

    if info:
        info = info.items()
        for j,k in info:
            sum += k
        return sum
    else:
        return sum

# result = function5(1, 2, 3)
# print(result)  # 5
# result = function5(1, 2, 3, 4, 5)
# print(result)  # 14
# result = function5(1, 2, 3, b=4)
# print(result)  # 9
# result = function5(1, 2, 3, b=4, c=5)
# print(result)  # 14

def multiple_counter(n1, n2, target):
    L = []
    for i in range(1,target):
        if (i % n1 == 0) or (i % n2 ==0):
            L.append(i)
    A = len(L)
    return A

# print(multiple_counter(3, 5, 10))

def multiple_sum(n, target):
    sum = 0
    for i in range(1,target):
        if i % n == 0:
            sum += i
    return sum

# print(multiple_sum(3,10))
