import sys
input = sys.stdin.readline

t = int(input())   # testlərin sayı

for _ in range(t):
    n, m = map(int, input().split())
    dp = [0] * (n + 1)   # hər şaxtada maksimum xəzinə
    
    for _ in range(m):
        x, y, v = map(int, input().split())
        
        # əvvəlki dəyərləri saxlayırıq (çünki eyni anda update etməsək qarışmaz)
        best_x = dp[x]
        best_y = dp[y]
        
        dp[x] = max(dp[x], best_y + v)
        dp[y] = max(dp[y], best_x + v)
    
    print(max(dp))
# This code is not true for it(((((((((((