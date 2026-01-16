n = int(input())
lines = []
for x in range(-n, n + 1):
    k = abs(x)
    m = n - k
    tokens = [str(i) for i in range(m+1)] + [str(i) for i in range(m - 1, -1, -1)]
    rowdu_qaqas = ' ' * (2 * k) + ' '.join(tokens)
    lines.append(rowdu_qaqas)
print("\n".join(lines))