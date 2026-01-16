n1 = input()
n2 = input()
s = ''
for i1, i2 in zip(n1, n2):
    s += str(int(i1) ^ int(i2))
print(s)    