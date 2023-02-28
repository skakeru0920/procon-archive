n, x = map(int, input().split())
l = list(map(int, input().split()))

res = 1
dis = 0
for e in l:
    dis += e
    if dis <= x:
        res += 1
    else:
        break

print(res)

