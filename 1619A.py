t = int(input())
for _ in range(t):
    s = input()
    len_of_s = len(s)
    if len_of_s % 2 == 1:
        print('NO')
    else:
        half = len_of_s // 2
        if s[:half] == s[half:]:
            print("YES")
        else:
            print('NO')