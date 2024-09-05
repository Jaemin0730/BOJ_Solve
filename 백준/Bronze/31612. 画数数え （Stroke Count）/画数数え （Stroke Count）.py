n = int(input())
s = input()
cnt = 0
for i in s:
    if i == "o":
        cnt += 1
    else:
        cnt += 2
print(cnt)