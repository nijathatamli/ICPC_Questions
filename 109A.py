n = int(input())

best = None

for b in range(n // 7 + 1):
    rest = n - 7*b
    if rest % 4 == 0:
        a = rest // 4
        if best is None or a + b < best[0] + best[1] or (a+b == best[0] + best[1] and b < best[1]):
            best = (a, b)

if best is None:
    print(-1)
else:
    a, b = best
    print("4"*a + "7"*b)
