n = int(input())
a = [int(input()) for _ in range(n)]
sol = 0

m = int(input())
for _ in range(m):
    e = int(input())
    sol += a[e - 1]

print(sol)