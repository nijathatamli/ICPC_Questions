t = int(input())
for _ in range(t):
    a, s = map(int, input().split())
    b = []
    while s > 0:
        x = a % 10
        y = s % 10
        if x <= y:
            b.append(y - x)
        else:
            s //= 10 
            y += 10 * (s % 10)
            if 10 <= y <= 19 and y >= x:
                b.append(y - x)
            else:
                print(-1)
                break
        a //= 10
        s //= 10
    else:  
        if a > 0:
            print(-1)
        else:
            while b and b[-1] == 0:
                b.pop()
            if not b:
                print(0)
            else:
                print(''.join(map(str, b[::-1])))