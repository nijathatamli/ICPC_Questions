class Counter(dict):
    def __init__(self, iterable=None):
        super().__init__()
        if iterable:
            for item in iterable:
                self[item] = self.get(item, 0) + 1

    def most_common(self, n=None):
        sorted_items = sorted(self.items(), key=lambda x: x[1], reverse=True)
        return sorted_items if n is None else sorted_items[:n]
n = int(input())
s = list(map(int, input().split()))
s.sort()
diffrence = s[-1] - s[0]
if diffrence:
    counted = Counter(s)
    ways = counted[s[-1]] * counted[s[0]]
else:
    ways = n * (n - 1) // 2
print(diffrence, ways)