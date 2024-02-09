# try:
#     print(a)
# except NameError as msg:
#     print(msg)
#


# try:
#     print(a)
# except NameError as msg:
#     print(msg)
#     print(type(msg),isinstance(msg, NameError))


# class MyError(Exception):
#     pass
#
# try:
#     raise MyError
# except MyError:
#     print("I found MyError")
# else:
#     print("No Error found")


# class MyError(Exception):
#     def __str__(self):
#         return "Hello Error"
# try:
#     raise MyError
# except MyError as e:
#     print(e)
# else:
#     print("No Error found")

# class MyError(Exception):
#     def __init__(self):
#         super().__init__("Hello")
# try:
#     raise MyError
# except MyError as e:
#     print(e)
# else:
#     print("No Error found")


'''exercise 1'''
'''
def divide(a,b):
    try:
        return a/b
    except ZeroDivisionError:
        return "Division by zero is not allowed"
    except TypeError:
        if b.isdigit():
            return a/int(b)
        else:
            return "Division by str is not allowed"

print(divide(1,0))
print(divide(1,"5"))
print(divide(1,"hello"))
'''


'''exercise 2'''
class OhMyGodError(Exception):
    def __str__(self):
        return "Oh, my god!"
# def __init__(self):
#   super().__init__("Oh, my god!")
def divide(a,b):
    try:
        if b == "Python":
            raise OhMyGodError
        return a/b
    except OhMyGodError as e:
        return e

print(divide(1,10))
print(divide(1,"Python"))

