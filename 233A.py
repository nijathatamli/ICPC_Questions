n = int(input())
if (n % 2) != 0:
    print(-1)
else:
    p = []
    for i  in range(1, n + 1, 2):
        p.append(i + 1)
        p.append(i)
    print(*p)