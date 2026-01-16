n = int(input())
for _ in range(n):
    a = int(input())
    s = map(int,input().split())
    main_array = []
    for x in s:
        main_array.append([x*(s.count(x))])
    print(s) 