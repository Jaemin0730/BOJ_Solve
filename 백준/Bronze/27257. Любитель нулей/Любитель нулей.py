k = input()
sol = 0
for i in k:
    if i == "0":
        sol += 1

for i in k[::-1]:
    if i == "0":
        sol -= 1
    else:
        break

print(sol)