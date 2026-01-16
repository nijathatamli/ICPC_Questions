n = int(input())
s = list(map(int,input().split()))
s = sorted(s, reverse=True)
count = 0
min_month = 0
for i in s:
    if min_month < n:
        min_month += i
        count += 1
    else:
        break
if min_month >= n:
    print(count)
else:
    print(-1)