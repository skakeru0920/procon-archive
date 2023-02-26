s = input()

count = 0
while True:
  if s[count].isupper():
    print(count + 1)
    break
  count += 1
  
  