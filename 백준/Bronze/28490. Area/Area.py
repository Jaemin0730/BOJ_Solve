n = int(input())
m = 0

for _ in range(n):
    h, w = map(int, input().split())
    m = max(m, h * w)
print(m)