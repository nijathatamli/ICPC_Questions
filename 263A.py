l = [list(map(int, input().split())) for _ in range(5)]

for i in range(5):
    if 1 in l[i]:
        row = i
        col = l[i].index(1)
        break

print(abs(2 - row) + abs(2 - col))
