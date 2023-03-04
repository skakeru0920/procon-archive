p = list(map(int, input().split()))

res = ""
alp = "abcdefghijklmnopqrstuvwxyz"
for i in p:
    res += alp[i - 1]
print(res)

