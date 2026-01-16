n, m, a = map(int, input().split())
count_n = (n + a - 1) // a
count_m = (m + a - 1) // a
total = count_n * count_m
print(total)
