n, d = map(int, input().split())
ans = 0

x = [list(map(int, input().split())) for i in range(n)]
for i in range(n):
    for j in range(n):
        # 同じ点の時に実行しない様にしたが、逆順の時にも実行されてしまう
        if i == j:
            continue
        sumSquare = 0
        for y, z in zip(x[i], x[j]):
            sumSquare += (y - z) ** 2
        dis = sumSquare ** 0.5
        if not dis - int(dis) > 0:
            ans += 1
            

print(ans // 2)
