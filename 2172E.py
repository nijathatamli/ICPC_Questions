import itertools

def compare_codes(a, b):
    A = 0
    for i in range(len(a)):
        if a[i] == b[i]:
            A += 1
    B = 0
    for i in range(len(a)):
        if a[i] != b[i] and a[i] in b:
            B += 1
    return f"{A}A{B}B"
t = int(input())

for _ in range(t):
    n, j, k = input().split()
    j, k = int(j), int(k)
    digits = list(n)

    perms = list(itertools.permutations(digits))

    perms.sort()

    code1 = perms[j - 1]
    code2 = perms[k - 1]

    result = compare_codes(code1, code2)

    print(result)
