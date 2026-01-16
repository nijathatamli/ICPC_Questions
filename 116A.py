t = int(input())
cap = max_cap = 0
for _ in range(t):
    exit, enter = map(int, input().split())
    cap += enter - exit
    max_cap = max(max_cap, cap)
print(max_cap)
