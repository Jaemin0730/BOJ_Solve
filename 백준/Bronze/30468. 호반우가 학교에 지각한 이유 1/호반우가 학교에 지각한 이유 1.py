s, d, i, l, n = map(int, input().split())
t = s + d + i + l

if t < (4 * n):
    print((4 * n) - t)
else:
    print(0)