import sys

input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n=int(input().strip())
    a=list(map(int, input().split()))
    b=list(map(int, input().split()))
    xa = 0
    xb = 0
    for i in range(n):
        xa^=a[i]
        xb^=b[i]
    if xa == xb:
        print("Tie")
        continue
    last_diff = -1
    for i in range(n):
        if a[i] != b[i]:
            last_diff = i + 1 
    if last_diff % 2 == 1:
    
        print("Ajisai")
    else:
        print("Mai")