t = int(input())
counter = 0
for _ in range(t):
    p, q = map(int,input().split())
    if q - p >= 2:
        counter += 1
print(counter)