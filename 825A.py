n = int(input())
s = input().strip()

result = 0
count = 0

for ch in s:
    if ch == '1':
        count += 1
    else: 
        result = result * 10 + count
        count = 0

result = result * 10 + count

print(result)
