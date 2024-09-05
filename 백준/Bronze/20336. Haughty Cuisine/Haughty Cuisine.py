import sys

n = int(sys.stdin.readline())

k = [sys.stdin.readline().rstrip().split() for _ in range(n)]

for i in k[0]:
    print(i)