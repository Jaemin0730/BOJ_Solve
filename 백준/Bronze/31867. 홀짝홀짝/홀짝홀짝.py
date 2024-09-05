import sys

input = sys.stdin.readline
n = int(input())
k = input().rstrip()

a = 0
for i in k:
    if int(i) % 2 == 0:
        a += 1
    else:
        a -= 1

if a == 0:
    print(-1)
elif a > 0:
    print(0)
else:
    print(1)