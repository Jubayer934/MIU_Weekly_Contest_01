n = int(input())
temp = 0

for _ in range (2, n):
    if n%_ == 0:
        temp+=1

print("Yes" if temp == 0 else "No")
