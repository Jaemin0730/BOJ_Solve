import sys

t = int(input()) 

for _ in range(t) : 
    n = int(input()) 
    s = sorted(map(int, sys.stdin.readline().split())) 

    print((s[-1] - s[0]) * 2)