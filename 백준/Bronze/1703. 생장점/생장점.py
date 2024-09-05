while 1:
    a = list(map(int, input().split()))
    if a[0] == 0:
        break
    n = 1
    for i in range(a[0]):
        s = a[2 * i + 1]
        p = a[2 * i + 2]
        n = n * s - p
    print(n)