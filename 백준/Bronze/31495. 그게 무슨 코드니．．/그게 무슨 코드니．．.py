a = input()

if a[0] == a[-1] == '"' and len(a[1:-1]) > 0:
    print(a[1:-1])
else:
    print("CE")