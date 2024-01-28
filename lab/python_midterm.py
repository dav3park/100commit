ef function01(a, b):
    c = a + b
    return c

# print(function01(1,2))

def function02(a):
    sum = 0
    if a:
        for i in a:
            sum += i
        return sum
    else:
        return 0

# print(function02([1,2,3,4,5]))
# print(function02([]))

def function03(a,b):
    sum = 0
    if (b-a) >= 1:
        for i in range(a+1,b):
            sum += i
        return sum
    else:
        return 0

# print(function03(1,4))
# print(function03(0,3))
# print(function03(-3,-1))


def function04(a):
    sum = 0
    for i in a:
        if i % 2 == 0:
            sum += i
    return sum

# print(function04([1,2,3,4,5]))
# print(function04((1,3,2)))
# print(function04([]))
# print(function04([-2,0,1]))



def function05(a):
    s = ''
    s += a.lower()
    v = s[0].upper() + s[1:]
    return v


print(function05("hello"))
print(function05("heLLo"))
print(function05("pYtHON"))
print(function05("AA"))

def function06(a):
    s = []
    v = []
    for i in a:
        s.append(i.lower())
    for i in s:
        v.append(i.lower())
    v.reverse()
    if s == v:
        return True
    else:
        return False

# print(function06("level"))
# print(function06("leVEL"))
# print(function06("Aa"))
# print(function06("Hello"))

def function07(a):
    sum = 0
    c = set(a)
    for i in c:
        sum += i
    return sum

# print(function07([1, 2, 2, 3, 3, 3]))
# print(function07((2, 2 ,1)))
# print(function07([-1]))
# print(function07((-1, -1, 0, 1)))

def function08(*a):
    sum = 0
    if a == None:
        return 0
    else:
        for i in a:
            if i % 2 == 0:
                sum += i
        return sum

# print(function08())
# print(function08(1))
# print(function08(1,2,3))
# print(function08(1,-2,3,6))

def function09(*c,**d):
    L = []
    if d == {}:
        return -1
    else:
        v = d.items()
        for j,k in v:
            L.append(k)
    return max(L)

# print(function09())
# print(function09(1,2,3))
# print(function09(a=1,b=2))
# print(function09(1,2,7,n1=5,n2=4))
# print(function09(5,k=2))

def function10(a):
    L = [1,1]
    if a ==1 or a==2:
        return L[a-1]
    else:
        i = 2
        while i<a:
            L.append(L[-2]+L[-1])
            i += 1
    return L[-1]


