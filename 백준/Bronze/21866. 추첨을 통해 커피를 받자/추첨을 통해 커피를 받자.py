mx = [100, 100, 200, 200, 300, 300, 400, 400, 500]
s = list(map(int, input().split()))
t, h = 0, 0
for i in range(9):
    if s[i] > mx[i]:
        h = 1
    t += s[i]
if h:
    print("hacker")
else:
    print("draw" if t >= 100 else "none")