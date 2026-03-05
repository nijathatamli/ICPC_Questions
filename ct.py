import sys
input = sys.stdin.readline

def solve():
    n = int(input())
    a =list(map(int,input().split()))
    left = [-1] * n
    right = [-1] * n
    stack = []
    
    for i in range(n):
        last = -1
        while stack and a[stack[-1]] < a[i]:
            last = stack.pop()
        if last != -1:
            left[i] = last
        if stack:
            right[stack[-1]] = i
        stack.append(i)
    
    root = stack[0]
    
    # Compute height via iterative post-order traversal
    height = [1] * n
    order = []
    stk = [root]
    while stk:
        node = stk.pop()
        order.append(node)
        if left[node] != -1:
            stk.append(left[node])
        if right[node] != -1:
            stk.append(right[node])
    
    for node in reversed(order):
        h = 1
        if left[node] != -1:
            h = max(h, 1 + height[left[node]])
        if right[node] != -1:
            h = max(h, 1 + height[right[node]])
        height[node] = h
    
    print(n - height[root])

t = int(input())
for _ in range(t):
    solve()
