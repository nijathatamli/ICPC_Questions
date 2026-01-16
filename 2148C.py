t = int(input())
for _ in range(t) :
    n,m = map(int,input().split())
    music = [[0,0]]
    for _ in range(n) :
        a,b = map(int,input().split())
        music.append([a,b])
    for i in range(len(music)-1) :
        if ((music[i+1][0] - music[i][0])%2==0 and abs(music[i+1][1] - music[i][1])%2==1 ) or ((music[i+1][0] - music[i][0])%2==1 and abs(music[i+1][1] - music[i][1])%2==0 ) :
            m-=1
    print(m)