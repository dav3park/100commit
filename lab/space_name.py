
def function1(a):
    result = ""
    for i in a:
        if i != " ":
            result += i
    return result

b = function1("박 찬종")
print(b)


def function1(a):
    b = list(a)
    result = ""
    for i in b:
        if i == " ":
            continue
        else:
            result += i
    return result


print(function1("박 찬종"))


