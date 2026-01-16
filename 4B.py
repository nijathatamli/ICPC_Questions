d, sumTime = map(int, input().split())
days = []
for _ in range(d):
    min_t, max_t = map(int, input().split())
    days.append([min_t, max_t])
min_total = sum(day[0] for day in days)
max_total = sum(day[1] for day in days)
if not (min_total <= sumTime <= max_total):
    print("NO")
else:
    schedule = [day[0] for day in days]
    remaining = sumTime - min_total

    for i in range(d):
        extra = days[i][1] - days[i][0] 
        add_hours = min(extra, remaining)
        schedule[i] += add_hours
        remaining -= add_hours  

    print("YES")
    print(" ".join(map(str, schedule)))
