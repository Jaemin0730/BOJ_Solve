from collections import defaultdict

sk = defaultdict(int)
s = input()

for i in s:
    sk[i] += 1

cnt = 0

for i in sk.values():
    cnt += i // 2
print(cnt)