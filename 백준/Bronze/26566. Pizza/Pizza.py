import math

n = int(input())

for _ in range(n):
    A1, P1 = map(int, input().split())
    R1, P2 = map(int, input().split())

    s = A1 / P1
    k = R1**2 * math.pi / P2

    if s > k:
        print("Slice of pizza")
    else:
        print("Whole pizza")