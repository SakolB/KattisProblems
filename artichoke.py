import math
p, a, b, c, d, n = input().split(" ")
p = int(p)
a = int(a)
b = int(b)
c = int(c)
d = int(d)
n = int(n)
highest = -float('inf')
diff = 0

def price(k):
    return p*((math.sin(a*k+b))+(math.cos(c*k+d)+2))

for i in range(1, n+1):
    pr = price(i)
    if pr > highest:
        highest = pr
    if highest > pr and highest - pr > diff:
        diff = highest - pr
print(diff)
