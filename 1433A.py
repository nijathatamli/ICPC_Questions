t = int(input())
for _ in range(t):
    x = int(input())
    d = int(str(x)[0])
    l = len(str(x))
    cem = ((d - 1) * 10) + (l * (l+1)) // 2
    print(cem)