k = int(input())
a, b = map(int, input().split())

def change_10(num, base):
    res = 0
    keta = 0 
    while num > 0:
        res = res + num % 10 * base ** keta
        num = num // 10
        keta += 1
    return res

print(change_10(a, k) * change_10(b, k))