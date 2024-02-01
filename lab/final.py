def function01(S):
    total = 0
    for i in S:
        if i % 2 == 1:
            total += i
    return total


# print(function01(S=[1, 2, 3, 4, 5]))
# print(function01(S=(1, 3, 2)))
# print(function01(S=[]))
# print(function01(S=[-2, 0, 1]))

def function02(a):
    name = []
    reversed_name = []

    for i in a:
        name.append(i.lower())
    for j in name:
        reversed_name.append(j)
    reversed_name.reverse()
    if name == reversed_name:
        return True
    else:
        return False

# print(function02("level"))
# print(function02("levEL"))
# print(function02("Aa"))
# print(function02("hello"))
# print(function02("pythoN"))

def function03(*a):
    total = 0
    if a == None:
        return 0
    else:
        for i in a:
            if i % 2 == 0:
                total += i
        return total

# print(function03())
# print(function03(1))
# print(function03(1,2,3))
# print(function03(1,-2,3,6))


def function04(a,b):
    try:
        return a / b
    except:
        return None

# print(function04(1,"10"))
# print(function04(1, 10))
# print(function04(0,0))
# print(function04(99,99))

class Person:
    def __init__(self, name="Park", height="160"):
        self.name = name
        self.height = height
    def change_name(self, new_name):
        self.name = new_name
    def change_height(self, new_height):
        self.height = new_height

# p = Person()
# print("p.name:", p.name)
# print("p.height:", p.height)
# p.change_name("Kim")
# p.change_height(170)
# print("p.name:", p.name)
# print("p.height:", p.height)

class Animal:
    def __init__(self):
        pass
    def cry(self):
        return "Cry"
class Dog(Animal):
    def cry(self):
        return "Woof"

# a = Animal()
# d = Dog()
# if issubclass(Dog, Animal):
#     print(a.cry())
#     print(d.cry())

class Human:
    def __init__(self,name="Park",age=20):
        self.name = name
        self.age = age

# h1 = Human()
# h2 = Human("Kim", 30)
# print("h1.name:", h1.name)
# print("h1.age:", h1.age)
# print("h2.name:", h2.name)
# print("h2.age:", h2.age)

class Number:
    def __init__(self,number):
        self.number = number
    def __add__(self, other):
        return self.number + other.number
    def __sub__(self, other):
        return self.number - other.number


# n1 = Number(1)
# n2 = Number(3.15)
# print(n1 + n2)  # n1 + n2 returns int or float type value
# print(n1 - n2)  # n1 - n2 returns int or float type value
# print("n1.number:", n1.number)
# print("n2.number:", n2.number)

class Student:
    def __init__(self,student_number):
        self.student_number = student_number
    def __eq__(self, other):
        return self.student_number == other.student_number

# s1 = Student(1234)
# s2 = Student(5678)
# print(s1==s1)  # s1==s1 returns bool type value, True or False
# print(s1==s2)  # s1==s2 returns bool type value, True or False
# print(s1.student_number)
# print(s2.student_number)

class Account:
    def __init__(self,balance):
        self.balance = balance
    def deposit(self, money):
        self.balance += money
    def withdraw(self, money):
        self.balance -= money

# a1 = Account(0)  # initial money
# a2 = Account(100)  # initial money
# print("a1's balance:", a1.balance)
# print("a2's balance:", a2.balance)
# a1.deposit(20)  # deposit money into a1’s account
# a2.withdraw(10)  # withdraw money from a2’s account
# print("a1's balance:", a1.balance)
# print("a2's balance:", a2.balance)
