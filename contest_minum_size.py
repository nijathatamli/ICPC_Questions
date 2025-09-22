t = int(input())
for _ in range(t) :
    x,y = map(int,input().split())
    if x<y :
        print(2)
    elif x==y :
        print(-1)
    else :
        if y==1 or x-y == 1 :
            print(-1)
        else :
            print(3)