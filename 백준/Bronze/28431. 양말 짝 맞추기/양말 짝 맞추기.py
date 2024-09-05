a = []

for i in range(5) :
    n = int(input())
    
    if n in a :
        a.remove(n)
    else : 
        a.append(n)

print(a[0])