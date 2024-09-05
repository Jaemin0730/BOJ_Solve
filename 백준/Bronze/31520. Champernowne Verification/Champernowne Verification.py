n = int(input())
c = [1, 12, 123, 1234, 12345, 123456, 1234567, 12345678, 123456789, 1234567890]

if n in c:
    print(len(str(n)))
else:
    print(-1)