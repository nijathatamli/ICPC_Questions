n = int(input())
i = 1
n -= 1
while i <= n:
    n -= i
    i += 1
print(n + 1)