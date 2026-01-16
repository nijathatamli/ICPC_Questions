n = int(input())
a = list(map(int, input().split()))
mn, mx = 10 ** 18, -10 ** 18

for mask in range(1, (1 << n) - 1):
    w, h = 0, 0
    for i in range(len(a)):
        if (mask >> i) & 1:
            w += a[i]
        else:
            h += a[i]
    mn = min(mn, w * h)
    mx = max(mx, w * h)

print(mn, mx, sep = " ")