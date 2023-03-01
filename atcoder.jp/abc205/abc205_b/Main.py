n = int(input())
a = list(map(int, input().split()))

a.sort()
flag = True
count = 1
for i in a:
    if i == count:
        count += 1
    else:
        flag = False
        break

print("Yes" if flag else "No")
