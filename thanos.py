import math
t = int(input())
while t > 0:
    p, r, f = input().split(" ")
    p = int(p)
    r = int(r)
    f = int(f)
    i = 0
    while p * (r**i) <= f:
        i = i+1
    print(i)
    t = t-1