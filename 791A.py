a,b = map(int,input().split())
s = 0
while a <= b:
    a *= 3
    b *= 2
    s += 1
print(s)

###########

import math
a, b = map(int, input().split())
s = math.ceil(math.log(b / a + 1e-9, 3 / 2))
print(s)
