def solve():
    n = int(input())
    s = list(map(int, input().split()))
    index_of_max_fib = 1
    if n == 1:
        print(1)
        return
    elif n == 2:
        print(2)
        return
    for x in range(n-2):
        if s[x+2] == s[x] + s[x+1]:
            index_of_max_fib = x + 2
    print(index_of_max_fib+1)
solve()