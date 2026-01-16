a, b = map(int,input().split())
s = ''
if b == 0:
    print(-1, -1)
else:
    while b >= 9 and a > 0:
        s += str(9)
        b -= 9 
        a -= 1
    s += str(b)
    while a > 1:
        s += '0'  
        a -= 1
    print(int(s[::-1]),s)