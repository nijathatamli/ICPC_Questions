n = int(input())
l = list(map(int,input().split()))
ans = [0] * n
for x in range(n):
    ans[l[x] - 1] = x + 1
print(ans)