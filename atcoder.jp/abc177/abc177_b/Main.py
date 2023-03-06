s = input()
t = input()

ans = 2 ** 30

for i in range(len(s) - len(t) + 1):
    # sのi文字めからtを走らせ、異なる文字数を記録していく
    count = 0
    for j in range(len(t)):
        if s[i + j] != t[j]:
            count += 1
    ans = min(ans, count)

print(ans)
