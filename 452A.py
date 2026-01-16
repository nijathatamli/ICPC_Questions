n = int(input())
s = input()
status = True
names = ["vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"]
if n == 8:
    print('vaporeon')
elif n == 6:
    print('espeon')
else:
    status = True
    for x in names:
        status = True
        for i in range(n-1):
            if x[i] != s[i] and s[i] != '.':
                status = False
                break
        if status:
            print(x)
            break
