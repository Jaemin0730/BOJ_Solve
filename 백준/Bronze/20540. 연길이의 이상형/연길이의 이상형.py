s = input()
a = ['E', 'I', 'S', 'N', 'T', 'F', 'J', 'P']
for i in s:
    a.remove(i)
sol = ''.join(a)
print(sol)