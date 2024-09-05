n, m = map(int, input().split())
a = 1

for _ in range(n):
    for _ in range(m):
        if a % m == 0:
            print(a, end = '')
        else:
            print(a, end = ' ')
        a += 1
        
    print()