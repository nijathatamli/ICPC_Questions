s = input()
l = []
vowels = ["a", "o", "y", "e", "u", "i"]
for i,x in enumerate(s):
    if x.lower() not in vowels:
        l.append(x.lower())
print('.' + '.'.join(l)) 