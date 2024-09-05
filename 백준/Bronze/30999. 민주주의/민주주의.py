n, m = map(int, input().split())
m = m // 2 + 1
a = 0;

for i in range(n) :
    s = input()
    cnt = 0;
    
    for j in s : 
        if j == 'O' : 
            cnt += 1
            
    if m <= cnt : 
        a += 1

print(a)