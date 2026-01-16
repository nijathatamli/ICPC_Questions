t = int(input())
for _ in range(t):
    n = int(input())
    diffrent_scueares_coubs = set()
    for x in range(1,n+1):
        if x**2 <= n:
            diffrent_scueares_coubs.add(x**2)
        else:
            break
    for x in range(1, n+1):
        if x**3 <= n:
            diffrent_scueares_coubs.add(x**3)
        else:
            break
    print(len(diffrent_scueares_coubs))
    
