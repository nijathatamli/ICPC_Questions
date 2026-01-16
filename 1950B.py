t = int(input())
for _ in range(t):
    n = int(input())
    for j in range(2*n):
        for i in range(2*n):
            if ((i // 2) + (j // 2)) & 1:
                print('.', end='')
            else:
                print('#', end='')
        print()
        
