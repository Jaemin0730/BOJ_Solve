a = int(input())
b = int(input())
c = int(input())

if sum([a, b, c]) == max([a, b, c]) * 2:
    print(1)
else:
    print(0)