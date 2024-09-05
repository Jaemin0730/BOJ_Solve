n = int(input())
s = 0
for number in range(1, n + 1):
    t = str(number)
    sum = 0
    for i in t:
        sum += int(i)
    if number % sum == 0:
        s += 1
print(s)
