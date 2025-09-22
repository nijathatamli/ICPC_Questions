t = int(input())
for _ in range(t):
    l, r = map(int, input().split())
    n = r - l + 1
    ans = [-1] * (r + 1)

    for i in range(r, -1, -1):
        if ans[i] != -1:
            continue
        if i == 0:
            mask = 0
        else:
            k = i.bit_length() - 1
            mask = (1 << (k + 1)) - 1
        j = mask - i
        ans[i] = j
        ans[j] = i

    total = 0
    for i in range(r + 1):
        total += (i | ans[i])

    print(total)
    print(" ".join(str(x) for x in ans))