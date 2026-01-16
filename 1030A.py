persons = int(input())
status = map(int,input().split())
for x in status:
    if x == 1:
        print("HARD")
        break
else:
    print('EASY')
    