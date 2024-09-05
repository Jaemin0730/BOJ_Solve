d1, y1 = map(int, input().split())
d2, y2 = map(int, input().split())

s = y1 - d1
m = y2 - d2

while s != m:
    if s < m:
        s += y1
    else:
        m += y2
print(s)