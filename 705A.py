def hulk(n):
    if n == 1:
        return "I hate it"
    elif n == 2:
        return "I hate that I love it"
    else:
        return hulk(n - 1).replace(" it", "") + " that " + ("I hate it" if n % 2 == 1 else "I love it")

print(hulk(int(input())))
