n = int(input())
x = list(map(int, input().split()))

x.sort()

for i in range(n):
  x.pop(0)
  x.pop(-1)

index = 0
sum = 0
for num in x:
  sum += num
  index += 1
  

print(sum / index)