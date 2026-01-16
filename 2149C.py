def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))

    cnt = [0] * k
    kk = 0

    for x in a:
        if x == k:
            kk += 1
        if x < k:
            cnt[x] += 1

    ans = 0
    for i in range(k):
        if cnt[i] == 0:
            ans += 1

    print(max(ans, kk))


t = int(input())
for _ in range(t):
    solve()
