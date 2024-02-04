def function1(a,b):
    sum = 0
    if (b - a) >= 1:
        for i in range(a+1, b):
            sum += i
        return sum
    else:
        return 0

# print(function1(1, 4))
# print(function1(0,3))
# print(function1(-3,-2))

def function2(a):
    L = []
    for i in range(1, a+1):
        if a % i == 0:
            L.append(i)
        else:
            continue
    return L

# print(function2(6))
# print(function2(2))
# print(function2(10))
# print(function2(11))

def function3(a):
    s = ""
    for i in a:
        if i.isdigit():
            continue
        else:
            s += i
    return s


# print(function3("1234python5678"))
# print(function3("1p2y3t4h5o6n@"))
# print(function3("stude8899nt1"))
