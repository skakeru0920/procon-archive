n, x = map(int, input().split())
count = 0

m = []
for i in range(n):
    t = int(input())
    x -= t
    m.append(t)
    count += 1

mini = min(m)
while x >= mini:
    x -= mini
    count += 1

print(count)
