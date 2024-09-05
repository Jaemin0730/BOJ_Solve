n = int(input())
s = 300

for i in range(n):
    t, l = map(int, input().split())
    s = min(s, t + l)

print(s)