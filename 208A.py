s = input()
i = []
s = s.split('WUB')
for x in s:
    if x != 'WUB':
        i.append(x)
print(*i)