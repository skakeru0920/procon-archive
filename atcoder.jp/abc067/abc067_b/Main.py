n, k = map(int, input().split())
l = list(map(int, input().split()))

l.sort(reverse=True)
res = 0
for i in range(k):
    res += l[i]

print(res)
