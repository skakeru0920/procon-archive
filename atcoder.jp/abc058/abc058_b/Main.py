o = list(input()) 
r = input()

for i in range(len(r)):
    o.insert(i * 2 + 1, r[i])

print("".join(o))
