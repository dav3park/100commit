# def function01(S):
#     total = 0
#     if S:
#         for i in S:
#             if i % 2 == 1:
#                 total += i
#         return total
#     else:
#         return 0

# print(function01(S=[1,2,3,4,5]))
# print(function01(S=[1,3,2]))
# print(function01(S=[]))
# print(function01(S=[2,0,1]))

# def function02(a):
#     name = []
#     reversed_name = []
#     for i in a:
#         name.append(i.upper())
#     for j in name:
#         reversed_name.append(j)
#     reversed_name.reverse()
#     if name == reversed_name:
#         return True
#     else:
#         return False

# print(function02("level"))
# print(function02("levEL"))
# print(function02("Aa"))
# print(function02("hello"))
# print(function02("pythoN"))

# def function03(*a):
#     total = 0
#     if a:
#         for i in a:
#             if i % 2 == 0:
#                 total += i
#         return total
#     else:
#         return 0

# print(function03())
# print(function03(1))
# print(function03(1,2,3,))
# print(function03(1,-2,3,6))

# def function04(a,b):
#     try:
#         return a/b
#     except:
#         return None
# print(function04(1,"10"))
# print(function04(1,10))
# print(function04(0,0))
# print(function04(99,99))

def collatz_counter(n):
    count = 0
    while True:
        while n%2 == 0:
            n = n/2
            count += 1
        if n == 1:
            break
        n = (3*n)+1
        count += 1
    return count

print(collatz_counter(6))
# print(collatz_counter(16))
# print(collatz_counter(12))
# print(collatz_counter(50))


class Account():
    def __init__(self,owner,balance):
        self.owner = owner
        self.balance = balance
    def transfer(self, other):
        other.balance += self.balance
        self.balance = 0
    def deposit(self,money):
        self.balance += money

# a1 = Account("Park", 10)
# a2 = Account("Lee", 20)
# a3 = Account("Kim", 30)
# print(a1.balance, a2.balance, a3.balance)
# a1.transfer(a2)
# print(a1.balance, a2.balance, a3.balance)
# a1.deposit(1)
# a2.deposit(5)
# print(a1.balance, a2.balance, a3.balance)

class Triangle:
    def __init__(self,w,h):
        self.width = w
        self.height = h
    def get_area(self):
        return (self.width*self.height)/2
    def __add__(self,other):
        return self.get_area() + other.get_area()

# t1 = Triangle(10, 20)
# t2 = Triangle(10, 4)
# print(t1+t2)
# t3 = Triangle(4, 20)
# t4 = Triangle(2, 4)
# print(t3+t4)

class Cat:
    def __init__(self,name,height):
        self.name = name
        self.height = height
    def __add__(self,other):
        baby_name = self.name[:2] + other.name[:2]
        baby_height = min(self.height,other.height)/2
        baby = Cat(baby_name,baby_height)
        return baby

# cat1 = Cat("Lucy", 30)
# cat2 = Cat("Maggie", 20)
# kitten = cat1 + cat2
# print(isinstance(kitten, Cat))
# print(kitten.name)
# print(kitten.height)

class Book:
    def __init__(self, title, page=0):
        self.title = title
        self.page = page
    def get_title(self):
        return f"The title of this book is {self.title}."
    def get_page(self):
        return f"This book has {self.title} pages."

class ComputerBook(Book):
    def __init__(self,title,author,page):
        self.author = author
        super().__init__(title,page)
    def get_author_name(self):
        return f"The author of this book is {self.author}"
    def get_page(self):
        if self.page > 100:
            return f"OMG, this book has {self.page} pages"
        else:
            return f"This book has {self.page} pages."

# cb1 = ComputerBook("Python", "Park", 500)
# cb2 = ComputerBook("Web", "Kim", 100)
# print(isinstance(cb1, Book), isinstance(cb1, ComputerBook))
# print(isinstance(cb2, Book), isinstance(cb2, ComputerBook))
# print(cb1.get_title())
# print(cb2.get_title())
# print(cb1.get_author_name())
# print(cb2.get_author_name())
# print(cb1.get_page())
# print(cb2.get_page())


def get_substring_count(t,p):
    length_p = len(p)

    count = 0
    for i in range(0,len(t)-length_p+1):
        substr = t[i:i+length_p]
        if int(substr)<=int(p):
            count += 1
    return count

#print(get_substring_count("3141592", "271"))


def func01(a):
    total = 0
    for i in range(a):
        if (i % 3 == 0) or (i % 5 == 0):
            total += i
    return total

# print(func01(1000))

def func02(a):
    total = 0
    for i in a:
        if i.isdigit() == True:
            total += int(i)
    return total

#print(func02("ajkdlfjlkadjfdklfjk124u34jkdljflkdjfl43223jkldjfkldjkl12j1l0044jkldjklf1812j1k2jlkdjklfjdf8333jk4ljkldjflkd893jkldjfkldjf8922823jk2l3jkljdklfjdlfd9823232j32jdjflkdjf9823"))

def get_bad_students(a,b):
    return a.difference(b)

# print(get_bad_students({1234, 2345, 3456, 4567}, {1234, 2345, 3456}))
# print(get_bad_students({1234, 1235, 1236, 1237}, {1234, 1235, 1236, 1237}))

def func04(a):
    name = ""
    for i in a:
        if i == " ":
            pass
        else:
            name += i
    return name

# print(func04("다 나카"))
# print(func04("홍    길동"))


def func05(N, M):
    total = 0
    for i in range(101):
        if (i % N == 0) or (i % M == 0):
            if (i % (N*M) != 0):
                total += i
    return total

# print(func05(5, 10))


def most(a):
    return max(a, key=a.count)

#print(most(("book", "pen", "pen", "phone", "laptop", "phone", "phone", "laptop", "laptop", "laptop")))


def func06(a):
    num = 0
    for i in range(len(a)-1):
        if a[i] == a[i+1]:
            num += 1
    if num > 0:
        return True
    else:
        return False

# print(func06("apple"))
# print(func06("aoke"))

def is_prime_number(a):
    li = []
    for i in range(1, a+1):
        if a % i ==0:
            li.append(i)
    if len(li) > 2:
        return False
    else:
        return True

# print(is_prime_number(3))
# print(is_prime_number(10))

def func08(a):
    total = 0
    save = ""
    for i in a:
        if i.isdigit() == True:
            save += i
        else:
            if save:
                total += int(save)
                save = ""
            else:
                pass
    total += int(save)
    return total
#print(func08("ajkdlfjlkadjfdklfjk124u34jkdljflkdjfl43223jkldjfkldjkl12j1l0044jkldjklf1812j1k2jlkdjklfjdf8333jk4ljkldjflkd893jkldjfkldjf8922823jk2l3jkljdklfjdlfd9823232j32jdjflkdjf9823"))

def get_unique_students(a):
    l = []
    li = []
    for i in a:
        li.append(i.lower())
    for j in li:
        if j not in l:
            l.append(j)
    return len(l)
# print(get_unique_students(("KIM", "kim", "Lee", "Park")))
# print(get_unique_students(("Bob", "Tommy", "tommy")))

class Triangle():
    def __init__(self,w,h):
        self.w = w
        self.h = h
    def get_area(self):
        return (self.w*self.h)/2
    def __add__(self, other):
        return self.get_area() + other.get_area()

# t1 = Triangle(10, 20)
# t2 = Triangle(10, 4)
# print(t1+t2)
# t3 = Triangle(4, 20)
# t4 = Triangle(2, 4)
# print(t3+t4)

class Cat():
    def __init__(self, name, height):
        self.name = name
        self.height = height
    def __add__(self, other):
        baby_name = self.name[:2] + other.name[:2]
        baby_height = min(self.height, other.height) / 2
        baby = Cat(baby_name, baby_height)
        return baby

# cat1 = Cat("Lucy", 30)
# cat2 = Cat("Maggie", 20)
# kitten = cat1 + cat2
# print(isinstance(kitten, Cat))
# print(kitten.name)
# print(kitten.height)

class Book:
    def __init__(self, title, page=0):
        self.title = title
        self.page = page
    def get_title(self):
        return f"The title of this book is {self.title}."
    def get_page(self):
        return f"This book has {self.title} pages."

class ComputerBook(Book):
    def __init__(self,title,author,page):
        super().__init__(title,page)
        self.author = author
    def get_author_name(self):
        return f"The author of this book is {self.author}"
    def get_page(self):
        if self.page > 100:
            return f"OMG, this book has {self.page} pages"
        else:
            return f"This book has {self.page} pages."

# cb1 = ComputerBook("Python", "Park", 500)
# cb2 = ComputerBook("Web", "Kim", 100)
# print(isinstance(cb1, Book), isinstance(cb1, ComputerBook))
# print(isinstance(cb2, Book), isinstance(cb2, ComputerBook))
# print(cb1.get_title())
# print(cb2.get_title())
# print(cb1.get_author_name())
# print(cb2.get_author_name())
# print(cb1.get_page())
# print(cb2.get_page())

class Account():
    def __init__(self, owner: str, balance: int):
        self.owner = owner
        self.balance = balance
    def transfer(self, other):
        other.balance += self.balance
        self.balance = 0
    def deposit(self, money):
        self.balance += money

a1 = Account("Park", 10)
a2 = Account("Lee", 20)
a3 = Account("Kim", 30)

# print(a1.balance, a2.balance, a3.balance)
# a1.transfer(a2)
# print(a1.balance, a2.balance, a3.balance)
# a1.deposit(1)
# a2.deposit(5)
# print(a1.balance, a2.balance, a3.balance)

def collatz_counter(n):
    count = 0
    while True:
        if n % 2 == 0:
            n = n / 2
            count += 1
            if n == 1:
                break
        else:
            n = (n*3)+1
            count += 1
    return count

# print(collatz_counter(6))
# print(collatz_counter(16))

def get_substring_count(t, p):
    count = 0
    length_p = len(p)
    for i in range(len(t)-length_p+1):
        substr = t[i:i+length_p]
        if int(substr) <= int(p):
            count += 1
    return count

#print(get_substring_count("3141592", "271"))


def function1(a, b, c):
    return a+b+c

# print(function1(1, 4, 5))
# print(function1(0, 3, -9))

def function2(a):
    total = 0
    for i in a:
        if i % 2 == 1:
            total += i
    return total


# print(function2([1, 2, 3]))
# print(function2([ ]))
# print(function2([-3, 1, 3, 2, 100]))

def function3(a):
    v = sorted(a)

    if len(a) > 1:
        return v[-2]
    elif len(a) == 1:
        return v[0]
    else:
        return 0

# print(function3([]))
# print(function3([-99]))
# print(function3([3, 1, 2, 0]))
# print(function3([99, 2, -1, 100]))
# print(function3([-1, -3, -2, 0]))

def function4(a):
    a = a.lower()
    return a[:-1] + a[-1].upper()

# print(function4("Hello"))
# print(function4("PyTHON"))

def function5(a):
    sum = 0
    count = 0
    for i in a:
        if i.isdigit() == True:
            sum += int(i)
            count += 1
    return str(sum / count)

# print(function5("todayis0425"))
# print(function5("h2a0p2p3y"))

def function6(a, b):
    a_list = []
    b_list = []
    for i in range(1, a+1):
        if a % i == 0:
            a_list.append(i)
    for j in range(1, b+1):
        if b % j == 0:
            b_list.append(j)
    a_list = set(a_list)
    b_list = set(b_list)

    return a_list.intersection(b_list)


# print(function6(6, 10))
# print(function6(2, 3))
# print(function6(24, 12))

def function7(a):
    total = 0
    if "math" in a.keys():
        del a["math"]
    for i in a:
        total += a[i]
    return total

# print(function7({"math": 90, "english": 25, "korean": 30}))
# print(function7({"math": 80, "ai": 38, "python": 80}))
# print(function7({"korean": 90, "python": 73}))

def function8(a):
    for x in a:
        if a.count(x) == 1:
            return x

# print(function8([4, 1, 2, 1, 2]))

def function9(*a):
    if len(a) == 2:
        return sum(a) + 10
    elif len(a) == 3:
        return sum(a)

# print(function9(1, 2))
# print(function9(1, 2, 3))
# print(function9(-9, -1))

def function10(*a ,**b):
    total = 0
    if a and b:
        for i in b:
            total += b[i]
        total -= sum(a)
        return total
    elif a:
        total -= sum(a)
        return total
    elif b:
        for j in b:
            total += b[j]
        return total
    else:
        return 0

# print(function10(1, 2, a=10, b=7))
# print(function10(-1, n=10, k=20))
# print(function10(age=10, height=175))
# print(function10(1, 2, 3, 4))
# print(function10())


