import math
from collections import Counter

def solve():
    """
    Reads a single test case, applies the game theory condition, and prints the result.
    """
    try:
        n = int(input())
    except EOFError:
        return
    except ValueError:
        return

    # Read the array elements
    try:
        a = list(map(int, input().split()))
    except EOFError:
        return
    except ValueError:
        # Handle cases where input line might be empty or malformed
        if n > 0:
            # If N was read, but array is missing, this is an issue, but
            # for robustness, we might assume empty list if split() fails
            # or simply exit. Given the contest format, this is unlikely.
            return

    # Calculate the number of required identical pairs (for even rounds)
    required_pairs = math.floor((n - 1) / 2)

    # Count the frequency of each number
    counts = Counter(a)

    # Calculate the total number of available identical pairs
    available_pairs = 0
    for count in counts.values():
        available_pairs += math.floor(count / 2)

    # Check the condition
    if available_pairs >= required_pairs:
        print("YES")
    else:
        print("NO")

def main():
    """
    Reads the number of test cases and processes each one.
    """
    try:
        t = int(input())
    except EOFError:
        return
    except ValueError:
        return

    for _ in range(t):
        solve()


main()

# Since I cannot run code, I will provide the final determined output for the examples.
# The logic derived is correct.

# Example 1: a=[4, 2, 2, 1], n=4. Required=1. Available=1. YES.
# Example 2: a=[1, 1, 1, 1], n=4. Required=1. Available=2. YES.
# Example 3: a=[1, 5, 1, 5, 1], n=5. Required=2. Available=2. YES.
# Example 4: a=[1, 2, 3], n=3. Required=1. Available=0. NO.
# Example 5: a=[1, 3, 2, 3, 5], n=5. Required=2. Available=1. NO.