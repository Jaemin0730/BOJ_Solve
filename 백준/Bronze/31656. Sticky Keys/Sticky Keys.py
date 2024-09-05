s = input()

l = ""
for i in s:
    if l == i:
        continue
    print(i, end="")
    l = i
print()