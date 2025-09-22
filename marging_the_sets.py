t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    sets = []
    count = [0] * (m + 1)

    for _ in range(n):
        arr = list(map(int, input().split()))
        li, elems = arr[0], arr[1:]
        sets.append(elems)
        for x in elems:
            count[x] += 1

    # [1..m] ədədlərinin hamısı əhatə olunubmu?
    ok = True
    for num in range(1, m + 1):
        if count[num] == 0:
            print("NO")
            ok = False
            break

    if not ok:
        continue

    # hansı setlər mütləq seçilməlidir (unique element daşıyırsa)
    mandatory = set()
    for i, elems in enumerate(sets):
        for x in elems:
            if count[x] == 1:
                mandatory.add(i)
                break

    free_sets = n - len(mandatory)

    if free_sets >= 2:
        print("YES")
    else:
        print("NO")
