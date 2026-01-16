n = int(input())
# if n % 2 == 0:
#     print(n // 2)
# else:
#     print(-(n +1)//2)


#########
n = int(input())
i = 1
sign = -1
total = 0

while i <= n:
    total += sign * i
    sign *= -1
    i += 1

print(total)
