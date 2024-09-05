import sys
input = sys.stdin.readline

n = int(input())
a = 0
for _ in range(n):
    if input().rstrip() == "anj":
        a = 1
print("뭐야;") if a == 1 else print("뭐야?")