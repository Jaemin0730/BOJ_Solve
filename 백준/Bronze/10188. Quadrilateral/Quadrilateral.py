t = int(input())

for i in range(t):
    x, y = map(int, input().split())

    for i in range(y):
        print("X" * x)
    print()