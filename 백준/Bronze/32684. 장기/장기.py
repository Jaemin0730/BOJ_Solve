c = 0
h = 1.5

a = list(map(int, input().split()))
b = list(map(int, input().split()))
s = [13, 7, 5, 3, 3, 2]

for i in range(6):
    c += a[i] * s[i]
    h += b[i] * s[i]

if c < h:
    print("ekwoo")
else:
    print("cocjr0208")