n, k = map(int, input().split())

s = 0
c = 0
for _ in range(n):
    o = input()
    if o == "save":
        s = c
    elif o == "load":
        c = s
    elif o == "shoot":
        c -= 1
    else:
        c += k
    print(c)