t = int(input())

s = list(map(int, input().split())) + [0 for _ in range(5)]
num = 0

K = s[0]
E = s[2]
M = s[1]
S = s[3]
F = s[4]

if K > E:
    num += (K - E) * 508
else:
    num += (E - K) * 108

if M > S:
    num += (M - S) * 212
else:
    num += (S - M) * 305

num += F * 707

print(num * 4763)