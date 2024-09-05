n = int(input())

for _ in range(n):
    x = int(input())
    sum = 0
    for __ in range(x):
        product, amount, price = input().split()
        sum += float(amount) * float(price)
    result = round(sum, 2)
    print("${:.2f}".format(result))