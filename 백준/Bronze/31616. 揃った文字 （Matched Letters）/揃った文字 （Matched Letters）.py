n = int(input())
s = input()
c = s[0]
tf = True

for i in s:
    if i != c:
        tf = False
        break
if tf:
    print("Yes")
else:
    print("No")