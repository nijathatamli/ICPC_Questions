t = int(input())
computers = []
for _ in range(t):
    a, b = map(int, input().split())
    computers.append((a,b))
computers.sort(key=lambda x: x[0])
for x in range(t-1):
    if computers[x][1] > computers[x+1][1]:
        print("Happy Alex")
        break
else:
    print("Poor Alex")