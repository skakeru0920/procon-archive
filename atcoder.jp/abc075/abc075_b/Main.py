# 0: 下 1:右 2: 上 3: 左 4: 右下 5: 右上 6: 左上 7:左下
dx = [1, 0, -1, 0, 1, -1, -1, 1]
dy = [0, 1, 0, -1, 1, 1, -1, -1]

h, w = map(int, input().split())
s = [input() for i in range(h)]

# 答えを表す二次元配列を用意（'.' のところは0とする)
result = [[0 if v == '.' else '#' for v in row] for row in s]

# 各マス(i, j)を順に処理
for i in range(h):
    for j in range(w):
        # 空きます以外はそのままにする
        if s[i][j] != '.':
            continue

        for x, y in zip(dx, dy):
            # (i, j)の周囲のますを(ni, nj)とする
            ni, nj = i + x, j + y

            # (ni, nj)が盤面外の場合はスキップ
            if ni < 0 or ni >= h or nj < 0 or nj >= w:
                continue

            if s[ni][nj] == '#':
                result[i][j] += 1

for row in result:
    print(*row, sep='')



