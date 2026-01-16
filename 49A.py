s = input()
s = s.replace(' ', '')
vowels = ['A', 'E', 'I', 'O', 'U', 'Y','a','e','i','o','u','y']
if s[-2] in vowels:
    print('YES')
else:
    print('NO')