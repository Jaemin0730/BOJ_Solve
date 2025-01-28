n, k, p = map(int, input().split())
v = list(map(int, input().split()))
sol = 0

for i in range(n):
    cnt = 0
    for j in range(k):
        if v[i * k + j] == 0:
            cnt += 1
        if cnt < p:
            sol += 1

print(sol)