a = input()
min_char = 'a'
for x in a:
    if min_char < x:
        min_char = x
print(a.count(min_char) * min_char)