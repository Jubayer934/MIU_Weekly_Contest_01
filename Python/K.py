n = 0

t = int(input())

for _ in range(t):
    s = input()
    if (s == "++X" or s == "X++"):
        n+=1
    else:
        n-=1
print(n)