s = input()

a = 0
b = 0

c = ["a", "e", "i", "o", "u"]

for i in s:
    if i in c:
        a += 1
        b += 1
    if i == "y":
        b += 1

print(a, b)