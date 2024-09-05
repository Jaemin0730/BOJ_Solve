import sys
input = sys.stdin.readline
a, b = map(int, input().split())

sum = 0
p = 0

for i in range (1, a + 1):
  sum += i

p = sum

for i in range(a + 1, b + 1):
  p += i
  sum *= p

print(sum % 14579)