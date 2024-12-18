import sys

input = sys.stdin.readline

n = int(input())
if n == 1 or n % 3 == 1 :
    print('U')
elif n == 2 or n % 3 == 2 :
    print('O')
else :
    print('S')