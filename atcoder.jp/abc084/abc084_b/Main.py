a, b = map(int, input().split())
s = input()

def check(s, a):
    if s[a] != '-':
        return False
    if s.count('-') != 1:
        return False
    return True

print("Yes" if check(s, a) else "No")

