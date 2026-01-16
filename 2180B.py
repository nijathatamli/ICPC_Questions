t = int(input())
for x in range(t):
    n = int(input())
    s = list(input().split())
    s.sort()
    print(''.join(s))