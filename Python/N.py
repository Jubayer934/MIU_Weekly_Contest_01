t = int(input())

e = 0
o = 0
p = 0
n = 0

numbers = list(map(int,input().split()))

for _ in numbers:

    if _%2 == 0:
        e+=1
    else:
        o+=1
    if _>0:
        p+=1
    elif _<0:
        n+=1
print(f"Even: {e}\nOdd: {o}\nPositive: {p}\nNegative: {n}")