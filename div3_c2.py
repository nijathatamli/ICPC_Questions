import sys
input= sys.stdin.readline
def solve():
    t=int(input())
    for _ in range(t):
        n=int(input())
        p=list(map(int, input().split()))
        pos = [0]*(n + 1)
        for i, x in enumerate(p):
            
            pos[x]=i

        pre_min = [0] * (n + 1)
        mn = n + 1
        for k in range(1, n + 1):
            if pos[k] < mn:
                mn = pos[k]
            pre_min[k] = mn

        suf_max = [0] * (n + 2)
        mx = -1
        for k in range(n, 0, -1):
            if pos[k] > mx:
                mx = pos[k]
            suf_max[k] = mx
        ok = True
        for k in range(1, n):
            if pre_min[k] > suf_max[k + 1]:
                ok = False
                break
        print("Yes" if ok else "No")


if __name__ == "__main__":
    solve()
