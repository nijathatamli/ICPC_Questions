d,sumTime = map(int, input().split())
days = []
for _ in range(d):
    min_t, max_t = map(int,input().split())
    days.append([min_t,max_t])
min_sum = sum(x[0] for x in days)
max_sum = sum(x[1] for x in days)
if not (min_sum < sumTime < max_sum):
    print('NO')
else:
    