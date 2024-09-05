def fact(n) : 
    if n > 1 : 
        return n * fact(n-1)
    else :
        return 1


n = int(input())

a = fact(n)
sol = a // 604800

print(sol)