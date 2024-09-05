while True:
    n = int(input())
    if n == 0:
        break

    a = []
    for _ in range(n):
        a.append(int(input()))

    while a:
        print(a.pop())
    print(0)