n, l = map(int,input().split())
a = list(map(int,input().split()))
a.sort()
max_distance = 0
distance = 0
for x in range(n-1):
    distance = a[x+1] - a[x]
    if max_distance < distance:
        max_distance = distance
print(max(a[0] - 0, l - a[n-1], max_distance/2))