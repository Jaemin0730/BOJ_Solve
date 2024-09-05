
a = list(input())
c = [1, 0, 0, 2]
for i in a:
    if i == 'A':
        c[0], c[1] = c[1], c[0]
    elif i == 'B':
        c[0], c[2] = c[2], c[0]
    elif i == 'C':
        c[0], c[3] = c[3], c[0]
    elif i == 'D':
        c[1], c[2] = c[2], c[1]
    elif i == 'E':
        c[1], c[3] = c[3], c[1]
    else:
        c[2], c[3] = c[3], c[2]
print(c.index(1)+1)
print(c.index(2)+1)