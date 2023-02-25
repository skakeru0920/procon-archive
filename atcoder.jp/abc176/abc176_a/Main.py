import math
n, x, t = map(int, input().split())

count = math.ceil( n / x )
print(count * t)
