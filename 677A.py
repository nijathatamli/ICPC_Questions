n, h = map(int, input().split())
s = map(int, input().split())
cem = 0
for x in s:
    if x > h:
        cem += 2
    else:
        cem += 1
print(cem)