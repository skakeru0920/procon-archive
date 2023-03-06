n = int(input())
l = list(map(int, input().split()))

ans = 0
l.sort()
for i in range(n - 2):
    for j in range(i, n - 1):
        for k in range(j, n):
            if l[i] == l[j] or l[j] == l[k] or l[k] == l[i]:
                continue
            if l[i] + l[j] > l[k]:
                ans += 1

print(ans)
