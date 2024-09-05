d = 0

for i in range(4):
    h, s = input().split()
    s = int(s)

    if h == "Es":
        d += s * 21
    else:
        d += s * 17

print(d)