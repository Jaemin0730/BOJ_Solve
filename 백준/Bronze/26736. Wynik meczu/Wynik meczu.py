s = input()
A = 0
B = 0
for i in s:
    if i == "A":
        A += 1
    else:
        B += 1

print(f"{A} : {B}")