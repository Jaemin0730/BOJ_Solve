d = int(input())

for _ in range(d):
    c = list(map(int, input().split()))[1:]
    print("Denominations: ", end="")
    print(*c)

    a = 0
    b = True
    for i in c:
        if i < a * 2:
            b = False
            break
        a = i
    if b:
        print("Good coin denominations!")
    else:
        print("Bad coin denominations!")
    print()