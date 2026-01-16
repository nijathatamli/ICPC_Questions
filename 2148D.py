def solve():
    n = int(input())
    a = list(map(int, input().split()))
    p = [[], []]
    for x in a:
        p[x % 2].append(x)
    ans = 0
    if p[1]:
        ans += sum(p[0])
    p[1].sort(reverse=True)
    m = len(p[1])
    for i in range((m + 1) // 2):
        ans += p[1][i]
    print(ans)

t = int(input())
for _ in range(t):
    solve()
