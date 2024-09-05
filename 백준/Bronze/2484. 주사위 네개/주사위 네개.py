def func(t):
    if len(set(t)) == 1:
        return 50000 + t[0] * 5000
    if len(set(t)) == 2:
        if t[1] == t[2]:
            return 10000 + t[1] * 1000
        else:
            return 2000 + t[0] * 500 + t[2] * 500
    for i in range(3):
        if t[i] == t[i+1]:
            return 1000 + t[i] * 100
    return t[3] * 100

n = int(input())
ml = []
for _ in range(n):
    t = sorted(list(map(int, input().split())))
    ml.append(func(t))

print(max(ml))