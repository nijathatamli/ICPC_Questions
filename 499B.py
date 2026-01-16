len_sum, t = map(int, input().split())
s = {}
for _ in range(t):
    a, b = input().split()
    if len(a) > len(b):
        s[a] = b
        s[b] = b
    elif len(b) > len(a):
        s[b] = a
        s[a] = a
    else:  
        s[a] = a
        s[b] = b
simvol = input().split()
tras_version = ''
for x in simvol:
    if x in s:  
        tras_version += ' ' + s[x]
    else:      
        tras_version += ' ' + x

print(tras_version.strip())
