n = int(input())

d = []

for _ in range(n):
    x, y = map(int, input().split())
    d.append([y, x])

print(*(min(d)[::-1]))