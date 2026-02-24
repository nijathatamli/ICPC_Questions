t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a.sort()
    b.sort()
    ans = 0
    for x in range(1, k+1):
        id_b = b[-x]
        group = a[0:id_b]
        ans += sum(group) - min(group)
        del a[0:id_b]
    ans += sum(a)
    print(ans)