n = int(input())
s = list(map(int, input().split()))
max_amazing = s[0]
min_amazing = s[0]
count = 0
for x in s[1:]:
    if x > max_amazing:
        count += 1
        max_amazing = x
        continue
    elif x < min_amazing:
        min_amazing = x
        count += 1
print(count)