def function1(a,b,c):
    return a + b + c
# print(function1(1, 4, 5))
# print(function1(0, 3, -9)) # -6 (because 0+3+(-9) is -6)
# print(function1(-3, -2, 5)) # 0 (because (-3)+(-2)+5 is 0)
# print(function1(0, 999, 1))

def function2(a):
    sum = 0
    if a:
        for i in a:
            if (i % 2 == 0):
                continue
            else:
                sum += i
        return sum
    else:
        return 0

# print(function2([1, 2, 3]))
# print(function2([]))
# print(function2([1, 2, 3, 4])) # 4 (because 1+3 is 4)
# print(function2([-3, 1, 3, 2, 100]))

def function3(a):
    if a:
        if (len(a) > 1):
            a = sorted(a)
            for i in a:
                if i < 0 or i ==0:
                    a.remove(i)
                return a[1]

            return a[1]
        else:
            return a[0]
    else:
        return 0

# print(function3([ ])) # 0 (because there is no element.)
# print(function3([-99])) # -99 (because there is only 99 in the given list.)
# print(function3([3, 1, 2, 0])) # 2 (because 2 is the second largest number.)
# print(function3([99, 2, -1, 100])) # 99 (because 2 is the second largest number.)
# print(function3([-1, -3, -2, 0]))

def function4(a):
    s = a.lower()
    v = s[:-1] + s[-1].upper()
    return v

# print(function4("Hello"))  # hellO
# print(function4("PyTHON"))  # pythoN
# print(function4("abc"))  # abC
# print(function4("ClasS"))  # clasS

def function5(a):
    sum = 0
    L = []
    for i in a:
        if i.isdigit():
            i = int(i)
            L.append(i)
            sum += i
    v = sum / len(L)
    return v

# print(function5("todayis0425"))  # 2.75 (because ((0+4+2+5) / 4) is 2.75)
# print(function5("h2a0p2p3y"))  # 1.75 (because ((2+0+2+3) / 4) is 1.75)
# print(function5("A1B2C3"))  # 2.0 (because ((1+2+3) / 3) is 2.0)
# print(function5("pyt0hon"))  # 0.0 (because 0/1 is 0)


def function7(a):
    sum = 0
    a["math"] = 0
    a = a.items()
    for i,k in a:
        sum += k
    return sum

# print(function7({"math": 90, "english": 25, "korean": 30}))  # 55 (because 25+30)
# print(function7({"math": 80, "ai": 38, "python": 80}))  # 118 (because 38+80)
# print(function7({"korean": 90, "python": 73}))  # 163 (because 90+73)
# print(function7({"math": 0, "computer": 20, "ai": 99}))  # 119 (because 20+99)
# print(function7({"python": 88, "statistics": 12}))  # 100 (because 88+12)

def function8(a):
    d = {}
    for i in a:
        if i not in d:
            d[i] = 1
        else:
            if i in d:
                d[i] += 1
    d = d.items()
    for j,k in d:
        if k == 1:
            return j

# print(function8([4, 1, 2, 1, 2]))  # 4 (because 4 appears once)
# print(function8([1]))  # 1 (because 1 appears once)
# print(function8([2, 2, -1]))  # -1 (because 1 appears once)
# print(function8([-1, 1, -1, 99, 1, 2, 2]))  # 99

def function9(a, b, c=10):
    return a + b + c

# print(function9(1, 2))  # 13 (because 1+2+10 is 13)
# print(function9(1, 2, 3))
# print(function9(-9, -1)) # 0 (because ((-9)+(-1)+10 is 0)
# print(function9(10, 20, -30)) # 0 (because 10+20+(-30) is 0)

# def function10(*a, **b):
#     sum = 0
#     if *a and
#     for i in a:
#         sum += i
#
#
# print(function10(1, 2, a=10, b=7))  # 14 (because (10+7) - (1+2))
# print(function10(-1, n=10, k=20))  # 31 (because (10+20) - (-1))
# print(function10(age=10, height=175))  # 185 (because (10+175) - (0))
# print(function10(1, 2, 3, 4))  # -10 (because (0) - (1+2+3+4))
# print(function10())  # 0 (because (0) - (0))

