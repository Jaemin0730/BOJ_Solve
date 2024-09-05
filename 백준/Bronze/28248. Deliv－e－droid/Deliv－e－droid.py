p = int(input())
c = int(input())

k = p * 50 - c * 10
if p > c:
    k += 500

print(k)