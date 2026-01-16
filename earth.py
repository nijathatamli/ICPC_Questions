n, k = map(int, input().split())
a = list(map(int, input().split()))

count = {}
current_sum = 0
max_sum = 0
l = 0

for r in range(n):
    if a[r] not in count:
        count[a[r]] = 0
    count[a[r]] += 1
    current_sum += a[r]
    
    while len(count) > k:
        count[a[l]] -= 1
        current_sum -= a[l]
        if count[a[l]] == 0:
            del count[a[l]]
        l += 1
    
    max_sum = max(max_sum, current_sum)

print(max_sum)
