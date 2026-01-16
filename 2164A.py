import sys

input = sys.stdin.readline
t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    x = int(input())
    
    if min(arr) <= x <= max(arr):
        print("YES")
    
    else:
        print("NO")