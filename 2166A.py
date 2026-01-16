MOD = 998244353

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    
    from collections import Counter
    cnt = Counter(a)
    
    # Get unique elements and their counts
    elements = []
    counts = []
    for val in sorted(cnt.keys()):
        elements.append(val)
        counts.append(cnt[val])
    
    m = len(elements)
    
    # dp[i][state] = number of ways to partition first i element types
    # state represents the multiset s as a tuple of counts
    dp = {}
    dp[()] = 1
    
    for i in range(m):
        new_dp = {}
        elem = elements[i]
        count = counts[i]
        
        for state, ways in dp.items():
            # Try all ways to partition 'count' occurrences of elem
            # into groups and pick modes from each group
            
            # For each partition of count items into groups,
            # we can add different numbers of elem to state
            
            # We need to enumerate partitions and check which are modes
            partitions = []
            generate_partitions(count, [], partitions)
            
            for partition in partitions:
                # For this partition, elem is a mode in all groups
                # (since all elements in a group are the same)
                # So we add len(partition) copies of elem to s
                
                add_count = len(partition)
                new_state = list(state)
                
                # Find position to insert/update
                inserted = False
                for j in range(len(new_state)):
                    if new_state[j][0] == elem:
                        new_state[j] = (elem, new_state[j][1] + add_count)
                        inserted = True
                        break
                
                if not inserted:
                    new_state.append((elem, add_count))
                
                new_state = tuple(sorted(new_state))
                
                if new_state not in new_dp:
                    new_dp[new_state] = 0
                new_dp[new_state] = (new_dp[new_state] + ways) % MOD
        
        dp = new_dp
    
    return sum(dp.values()) % MOD

def generate_partitions(n, current, result):
    if n == 0:
        if current:
            result.append(current[:])
        return
    
    start = current[-1] if current else 1
    for i in range(start, n + 1):
        current.append(i)
        generate_partitions(n - i, current, result)
        current.pop()

t = int(input())
for _ in range(t):
    print(solve())