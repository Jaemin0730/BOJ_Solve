L, R, A = map(int, input().split())
a, b = min(L, R), max(L, R)
t = min(A, b - a)
a += t
A -= t
sol = a * 2 + (A // 2 * 2 if A else 0)
print(sol)