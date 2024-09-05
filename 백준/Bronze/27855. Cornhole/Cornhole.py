H1, B1 = map(int, input().split())
H2, B2 = map(int, input().split())
s1 = 3 * H1 + B1
s2 = 3 * H2 + B2

if s1 > s2:
    print(1, s1 - s2)
elif s1 < s2:
    print(2, s2 - s1)
else:
    print("NO SCORE")