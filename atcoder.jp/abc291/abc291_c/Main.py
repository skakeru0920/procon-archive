import numpy

n = int(input())
s = input()

p = 0
l = [p]
for i in range(n):
  if s[i] == 'R':
    p += 1 * 1000000
  elif s[i] == 'L':
    p -= 1 * 1000000
  elif s[i] == 'U':
    p += 1
  elif s[i] == 'D':
    p -= 1
  
  l.append(p)


print("Yes" if numpy.unique(l).size != len(l) else "No")

    