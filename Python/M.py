s = input()
if "*" in s:
    x = s.find("*")
elif "+" in s:
    x = s.find("+")
elif "/" in s:
    x = s.find("/")
else:
    x = s.find("-")

s1 = int(s[:x])
s2 = int(s[(x+1):])

if "*" in s:
    print(s1*s2)
elif "+" in s:
    print(s1+s2)
elif "/" in s:
    print(s1//s2)
else:
    print(s1-s2)
