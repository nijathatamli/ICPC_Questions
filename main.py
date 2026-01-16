import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    left=a[0]
    right = a[-1]

    if left == -1 and right == -1:
        left = right = 0


    elif left == -1:
        left = right
    elif right == -1:
        right = left
    a[0] = left
    a[-1] = right
    for i in range(1, n-1):
        if a[i] == -1:
            a[i] = 0
    ans = abs(a[-1] - a[0])
    print(ans)
    print(*a)