n = int(input())
s = list(map(int,input().split()))
s = sorted(s)
element_min = min(s)
for x in s:
    if x % element_min != 0:
        print(-1)
        break
else:
    print(element_min)

