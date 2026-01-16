n = int(input())
count = 0
for coin in [100, 20, 10, 5, 1]:
    count += n // coin
    n %= coin
print(count)
