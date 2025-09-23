n, k = map(int, input().split())
a = list(map(int, input().split()))
threshold = a[k-1]  
count = 0
for x in a:
    if x > 0 and x >= threshold:
        count += 1
    else:
        break
print(count)
