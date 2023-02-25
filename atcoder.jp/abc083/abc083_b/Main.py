def sumDisit(num):
  res = 0
  while num > 0:
    res += num % 10
    num = num // 10
  return res

n, a, b = map(int, input().split())

count = 0
for i in range(n + 1):
  if a <= sumDisit(i) <= b:
    count += i
    
print(count)