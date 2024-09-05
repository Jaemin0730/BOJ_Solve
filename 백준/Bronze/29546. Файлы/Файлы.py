n = int(input())

a = [0]
for _ in range(n):
    a.append(input())

m = int(input())
for _ in range(m):
    l, r = map(int, input().split())
    for i in range(l, r + 1):
        print(a[i])