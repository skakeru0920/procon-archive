n, q = map(int, input().split())
card = [0] * n
for i in range(q):
    num, x = map(int, input().split())
    if num == 1:
        card[x - 1] += 1
    elif num == 2:
        card[x - 1] += 2
    elif num == 3:
        if card[x - 1] >= 2:
            print("Yes")
        else:
            print("No")

