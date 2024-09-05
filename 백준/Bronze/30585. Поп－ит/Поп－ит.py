h, w = map(int, input().split())
r = 0
b = 0
for _ in range(h):
    l = input()
    for i in l:
        if i == "0":
            r += 1
        else:
            b += 1
print(min(r, b))