import functools

n = int(input()) 

@functools.lru_cache(maxsize=None)
def count_yakusu(n):
    count = 0
    i = 1
    while i*i <= n:
        if n % i == 0:
            count += 1
            if i != n // i:
                count += 1
        i += 1
    return count
 
ans = 0
for i in range(1, n):
    ans += count_yakusu(i) * count_yakusu(n - i)
print(ans)
