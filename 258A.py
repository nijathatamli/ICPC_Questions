n = input()
if len(set(n)) == 1:
    print(n[1:])
else:
    n = n.replace('0', '' , 1)
    print(n)