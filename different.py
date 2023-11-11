try:
    while True:
        a,b = input().split(" ")
        x = int(a)
        y = int(b)
        print(abs(x-y))
except EOFError:
    pass
