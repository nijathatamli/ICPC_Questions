def upper_function(s):
    result = ""
    for x in s:
        if 'a' <= x <= 'z':
            result += chr(ord(x) - 32)
        else:
            result += x
    return result

t = int(input())
for _ in range(t):
    s = input()
    if len(s) >= 3 and s[0].upper() == 'Y' and s[1].upper() == "E" and s[2].upper() == "S":
        print(upper_function(s))
    else:
        print("NO")
