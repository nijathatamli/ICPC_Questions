n = int(input())
x = list(map(int,input().split()))
for i in x:
    divisors = [1,i]
    for checking_number in range(2,i):
        if i % checking_number == 0:
            divisors.append(checking_number)
    if len(divisors) == 3:
        print("YES")
        
    else:
        print("NO")