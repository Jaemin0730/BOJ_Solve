t = int(input())

for _ in range(t):
    g, c, e = map(int, input().split())

    if g == 1:
        k = 1
    elif g == 2:
        k = 3
    elif g == 3:
        k = 5
    if c > e:
        print(0)
    else:
        print((e - c) * k)