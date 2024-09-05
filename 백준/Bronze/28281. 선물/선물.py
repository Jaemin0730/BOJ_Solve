n, x = map(int, input().split())
s = list(map(int, input().split()))
a = []

for i in range(n - 1):
    a.append((s[i] + s[i + 1]) * x)

print(min(a))