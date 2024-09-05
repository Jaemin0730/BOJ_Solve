s = list(input())
k = input()
d = []
for i in s:
	if i.isalpha():
		d.append(i)
d = ''.join(d)
if k in d:
	print(1)
else:
	print(0)