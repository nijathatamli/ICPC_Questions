s = list(map(int, input().split()))
s = sorted(s)
dif = s[-1] - s[0]
if dif < 10:
    print(f'final {s[1]}')
else:
    print('check again')