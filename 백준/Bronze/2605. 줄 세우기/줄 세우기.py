a = []

n = int(input())

l = list(map(int,input().split()))

for i in range(n):

    a.insert(l[i],i+1)

print(*a[::-1])