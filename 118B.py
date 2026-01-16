n = int(input())
s = ''
for x in range(n+1):
    s = ''
    s = " " * (2 * (n - x))
    if x == 0:
        s += '0'
    else:
        for i in range(x+1):
            s += f'{i}' + ' '
        for r in range(x-1, 0, -1):
            s += f'{r}' + ' '
        if x != 0 : 
            s += '0'
    print(s)
for x in range(n - 1, -1, -1):
    s = ""
    s += " " * (2 * (n - x))
    for i in range(x + 1):
        s += f"{i} "
    for r in range(x - 1, -1, -1):
        s += f"{r} "
    print(s)