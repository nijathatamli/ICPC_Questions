def binary_search(array, target):
    left, right = 0, len(array) - 1
    while left <= right:
        mid = (left + right) // 2
        if array[mid] == target:
            return True
        elif array[mid] > target:
            right = mid - 1
        else:
            left = mid + 1
    return False        
n1, n2 = map(int, input().split())
array = list(map(int, input().split()))
finded = list(map(int, input().split()))
for target in finded:
    half_of_array = len(array) // 2
    if binary_search(array, target):
        print('YES')
    else:
        print('NO')
