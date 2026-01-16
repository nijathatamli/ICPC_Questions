t = int(input())
for _ in range(t):
    a, b = map(int,input().split())
    s = input()
    l = ['+'] * a
    for x in s:
        if x == '0':
            for i in range(a):
                if l[i] == '+':
                    l[i] = '-'
                    break
        if x == '1':
            for i in range(a):
                if l[-i] == '+':
                    l[-i] = '-'
                    break
        if x == '2':
            
    print(l)