s = input()

for _ in range(len(s)):
    if _ == 0:
        print(s[_].upper(),end="")
        continue
    if s[_] == "s":
        print("$",end="")
    elif s[_] == "i":
        print("!",end="")
    elif s[_] == "o":
        print("()",end="")
    else:
        print(s[_],end="")
print(".")


