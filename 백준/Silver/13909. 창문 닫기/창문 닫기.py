import sys
n = int(sys.stdin.readline())
sol = 0
x = 1
while x * x <= n:
    x += 1
    sol +=1
print(sol)