n = int(input())

for _ in range(n):
    a, b = map(float, input().split())
    h = a * 2 / b
    print("The height of the triangle is {:.2f} units".format(h))