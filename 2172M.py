# Python 3
import sys
from collections import deque

input = sys.stdin.readline

n, m, k = map(int, input().split())
a = list(map(int, input().split()))  # 0-indexed list of types

g = [[] for _ in range(n+1)]
for _ in range(m):
    u, v = map(int, input().split())
    g[u].append(v)
    g[v].append(u)

INF = 10**9
dist = [INF] * (n+1)
dq = deque([1])
dist[1] = 0

while dq:
    u = dq.popleft()
    for v in g[u]:
        if dist[v] == INF:
            dist[v] = dist[u] + 1
            dq.append(v)

# compute max for each product type 1..k
max_dist = [-1] * (k+1)
for i in range(1, n+1):
    t = a[i-1]
    if dist[i] > max_dist[t]:
        max_dist[t] = dist[i]

# print results for types 1..k
print(' '.join(str(max_dist[t]) for t in range(1, k+1)))
