n = int(input())
a = list(map(int, input().split()))

min_diff = abs(a[0] - a[-1])
ans = (n, 1)  

for i in range(n - 1):
    diff = abs(a[i] - a[i + 1])
    if diff < min_diff:
        min_diff = diff
        ans = (i + 1, i + 2)

print(ans[0], ans[1])
