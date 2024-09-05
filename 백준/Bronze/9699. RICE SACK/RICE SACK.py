t = int(input())

for i in range(1, t + 1):
    rices = list(map(int, input().split()))

    print(f"Case #{i}: {max(rices)}")