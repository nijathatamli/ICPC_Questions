t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    total = n * n
    m = total - k
    if m == 1:
        print("NO")
        continue
    print("YES")
    grid = [['R' for _ in range(n)] for _ in range(n)]
    if m == 0:
        pass
    elif n == 2 and m == 3:
        grid[0][0] = 'U'
        grid[0][1] = 'D'
        grid[1][0] = 'R'
        grid[1][1] = 'L'
    else:
        col_trap = []
        col = 0
        rem = m
        while rem >= 2:
            take = min(n, rem)
            col_trap.append((col, take))
            col += 1
            rem -= take
        adjusted = False
        if rem > 0:
            for i in range(len(col_trap) - 1, -1, -1):
                ts = col_trap[i][1]
                if ts >= 3:
                    col_trap[i] = (col_trap[i][0], ts - 1)
                    col_trap.append((col, 2))
                    col += 1
                    adjusted = True
                    break
        for c, size in col_trap:
            for i in range(size - 1):
                grid[i][c] = 'D'
            if size >= 2:
                grid[size - 1][c] = 'U'
    for row in grid:
        print(''.join(row))
