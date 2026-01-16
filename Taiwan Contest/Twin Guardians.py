t = int(input())
def prime_checker(a, b):
    if a < 2 or b < 2:
        return False  
    for x in range(2,a):
        if a % x == 0:
            return False
    for x in range(2,b):
        if b % x == 0:
            return False
    return True

for _ in range(t):
    a, b = map(int,input().split())
    if a + 2 == b and prime_checker(a, b):
        print('Y')
    else:
        print('N')
