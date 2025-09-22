s = input()
l = []
for symbol in s:
    if symbol == '(':
        l.append(symbol)
    elif symbol == ')':
        if len(l) == 0:   
            print("No")
            break
        else:
            l.pop()
    else:
        print("No")
        break
else:
    if len(l) == 0:
        print("Yes")
    else:
        print("No")
