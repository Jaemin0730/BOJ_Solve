import math

x, y = map(int, input().split())
sol = math.ceil(x * y / (4840 * 5))
print(sol)