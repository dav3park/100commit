def function1(a):
    count = 0
    while True:
        while a % 2 == 0:
            a = a/2
            count += 1
        if a == 1:
            break
        if a % 2 == 1:
            a = (a*3) + 1
            count += 1
    return count

# print(function1(6))
#



# def function2(*a):
#     for i in a:
#         if
#
#
#
#
# print(function2("admin"))
# print(function2("admin@abc.com", "customer@abc.com"))
#
#
# def function3(a,b):
#     li = []
#     for i in range(len(a)):
#         li.append(a[i])
#         li.append(b[i])
#     sum = 0
#     for i in range(0, len(a)+1):
#         if li[i] == "+":
#             sum += li[i+1]
#         elif li[i] == "-":
#             sum -= li[i+1]
#         elif li[i] == int():
#             pass
#     return sum
#
# print(function3(["+", "-", "+"],[1, 2, 3]))
#

def function4(a):
    st = str(a)
    sum = 0
    for i in st:
        sum += int(i)
    if a % sum*sum == 0:
        return True
    else:
        return False

# print(function4(21))
# print(function4(123))

def function5(a,b):
    try:
        return a/b
    except ZeroDivisionError:
        return "ZeroDivisionError"
    except:
        return "Error"

# print(function5(1, "10"))
# print(function5(0, 0)) # "ZeroDivisionError"
# print(function5(1, 10))
# print(function5(10, [1, 2, 3]))

class Anonymizer:
    def __init__(self, name):
        self.name = name
    def get_anonymized_name(self, n):
        st = ""
        st += "*" * len(self.name[:n])
        st += self.name[n:]
        return st


# a1 = Anonymizer("Sangkeun")
# print(a1.name)
# print(a1.get_anonymized_name(1))
# print(a1.get_anonymized_name(2))
# print(a1.get_anonymized_name(10))
# print(a1.name)
# a2 = Anonymizer("Kyungheeuniv")
# print(a2.name)
# print(a2.get_anonymized_name(3))
# print(a2.get_anonymized_name(8))
# print(a2.get_anonymized_name(20))
# print(a2.name)


class Account:
    def __init__(self, balance):
        self.balance = balance
    """Initializer: balance can be negative."""
    def deposit(self, money):
        self.balance += money
    """Deposit the given money to self's balance."""
    def withdraw(self, money):
        self.balance -= money
    """Withdraw the given money from self's balance."""
    def transfer(self, money, other):
        self.balance -= money
        other.balance += money
    """Transfer the given money from self's balance to other's account."""
    def __eq__(self, other):
        return self.balance == other.balance
    """Return True if the given two arguments’ balances are equal,
    False otherwise."""

# a1, a2 = Account(0), Account(0)
# print(a1.balance, a2.balance, a1==a2)
# a1.deposit(100)
# a2.withdraw(50)
# print(a1.balance, a2.balance, a1==a2)
# a1.transfer(50, a2)
# a2.deposit(50)
# print(a1.balance, a2.balance, a1==a2)
# a2.transfer(25, a1)
# print(a1.balance, a2.balance, a1==a2)

# class NonStrNameError(Exception):

class Integer:
    def __init__(self, number):
        self.number = number
    def __add__(self, other):
        new_num = self.number + other.number
        new = Integer(new_num)
        return new
    def __sub__(self, other):
        new_num1 = self.number - other.number
        new1 = Integer(new_num1)
        return new1

# n1 = Integer(2)
# n2 = Integer(3)
# n3 = n1+n2
# n4 = n2-n1
# print(n1.number, n2.number, n3.number, n4.number)
# print(type(n1)==type(n4))

class University:
    maximum_score = 4.5
    def __init__(self, score):
        self.score=score
    def get_percentile(self):
        return f"{int(self.score/self.maximum_score*100)}%"
    @classmethod
    def set_maximum_score(cls, i):
        cls.maximum_score = i

class KyungheeUniversity(University):
    def __init__(self, score):
        super().__init__(score)

# student1 = University(4.0)
# student2 = KyungheeUniversity(4.0)
# print(student1.get_percentile())
# print(student2.get_percentile())
# KyungheeUniversity.set_maximum_score(4.3)
# print(student1.get_percentile())
# print(student2.get_percentile())
# KyungheeUniversity.set_maximum_score(4.0)
# print(student1.get_percentile())
# print(student2.get_percentile())
