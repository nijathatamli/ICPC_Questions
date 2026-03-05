import sys
input = sys.stdin.readline
#Azerbaijani


#Baku
def get_head(blog):
    seen = set()
    result = []
    for u in reversed(blog):
        if u not in seen:
            seen.add(u)
            result.append(u)
    return result

def solve():
    n =int(input())
    blogs=[]
    heads =[]
    for _ in range(n):
        line = list(map(int, input().split()))
        
        b=line[1:line[0]+1]
        blogs.append(b)
        heads.append(get_head(b))
    
    excluded =set()
    order= []
    remaining = list (range(n))
    
    while remaining:
        best_idx = 0
        best_b = remaining[0]
        best_head = [u for u in heads[best_b] if u not in excluded]
        for k in range(1, len(remaining)):
            b = remaining[k]
            h = [u for u in heads[b] if u not in excluded]
            if h < best_head:
                best_head = h
                best_idx = k
                best_b = b
        order.append(best_b)
        remaining[best_idx] = remaining[-1]
        remaining.pop()
        excluded.update(blogs[best_b])
    Q = []
    placed = set()
    for b in order:
        for u in heads[b]:
            if u not in placed:

                
                Q.append(u)
        placed.update(blogs[b])
    
    sys.stdout.write(' '.join(map(str, Q)) + '\n')
t = int(input())
for _ in range(t):
    solve()