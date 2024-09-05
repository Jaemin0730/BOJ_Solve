t = int(input())
for _ in range(t):
    n = int(input())
    d = ["++++" for _ in range (n // 5)]
    d.append("|" * (n % 5))
    print(*d)