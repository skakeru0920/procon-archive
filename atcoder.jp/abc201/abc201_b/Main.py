n = int(input())

no1 = 0
name1 = "oo"
no2 = 0
name2 = ""

for i in range(n):
    s, t = input().split()
    t = int(t)
    if t >= no1:
        name2 = name1
        no2 = no1
        name1 = s
        no1 = t
    elif t >= no2:
        name2 = s
        no2 = t
print(name2)
