s = input()
x = 0
w = ""

while x < len(s):
    w += s[x]
    x += ord(s[x]) - 64

print(w)