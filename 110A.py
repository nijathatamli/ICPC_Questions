n = input()
s = set(n)
l = len(s)
for x in s:
    if x != '7' and x != '4' and l == 2:
        print('NO')
        break
else:
    print('YES')
