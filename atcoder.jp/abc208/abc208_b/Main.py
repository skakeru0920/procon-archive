def get_factorial(yen):
  price = 1
  for i in range(yen, 1, -1):
    price *= i
  return price

p = int(input())

count = 0
while p != 0:

  for i in range(10, 0, -1):
    yen = get_factorial(i)
    if yen <= p:
      p = p - yen
      count = count + 1
      break
print(count)
  