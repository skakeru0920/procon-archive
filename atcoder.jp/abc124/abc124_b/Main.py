n = int(input())

h = list(map(int, input().split()))

res = 0
most = 0
for i in range(len(h)):
    if most <= h[i]:
        res += 1
        most = h[i]

print(res)
