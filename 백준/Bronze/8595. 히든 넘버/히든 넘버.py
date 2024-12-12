n = int(input())
w = input()
num = ''
sol = 0

for i in w:
    if '0' <= i and i <= '9':
        num += i
    elif num != '':
        sol += int(num)
        num = ''

if num != '':
    sol += int(num)

print(sol)