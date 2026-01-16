t = int(input())   # testlərin sayı
for _ in range(t):
    n, m = map(int, input().split())  # n = setlərin sayı, m = ədədlərin üst həddi

    sets = []
    appeared = [0] * (m + 1)  # hər ədəd neçə dəfə çıxıb onu saxlayırıq

    # setləri oxuyuruq
    for _ in range(n):
        arr = list(map(int, input().split()))
        elems = arr[1:]      # birinci ədəd sayıdır, qalanlar elementlərdir
        sets.append(elems)
        for x in elems:
            appeared[x] += 1

    # 1-dən m-ə qədər bütün ədədlər çıxıb-çıxmamasını yoxla
    possible = True
    for num in range(1, m + 1):
        if appeared[num] == 0:
            print("NO")   # bu ədəd heç bir setdə yoxdur
            possible = False
            break
    if not possible:
        continue   # başqa yoxlamaya gərək yoxdur

    # məcburi seçilən setləri tap (unikal element daşıyan setlər)
    must_choose = set()
    for i, elems in enumerate(sets):
        for x in elems:
            if appeared[x] == 1:   # bu element başqa heç yerdə yoxdur
                must_choose.add(i) # bu seti mütləq götürməliyik
                break

    # sərbəst (istəyə bağlı) setlərin sayı
    free_sets = n - len(must_choose)

    # cavab çıxar
    if free_sets >= 2:
        print("YES")
    else:
        print("NO")
