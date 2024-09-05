w, h = map(int, input().split())
n, a, b = map(int, input().split())

if a > w or b > h:
    print(-1)
else:
    k, l = divmod(n, ((w // a) * (h // b)))
    if l:
        print(k + 1)
    else:
        print(k)