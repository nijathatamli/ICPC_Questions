t = int(input())
for _ in range(t):
    x,y,n = map(int, input().split())
    a = (n - y)/x
    print((x * int(a) + y))