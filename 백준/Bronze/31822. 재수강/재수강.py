r = input()[:5]
n = int(input())
cnt = 0
for _ in range(n):
    a = input()
    if a[:5] == r:
        cnt += 1

print(cnt)