s = input()
l, r = 0, len(s) - 1
counter = 0
while l < r:
    if s[l] != s[r]:
        counter += 1
    l += 1
    r -= 1
if (counter == 0 and len(s) % 2) or counter == 1:
    print('YES')
else:
    print('NO')