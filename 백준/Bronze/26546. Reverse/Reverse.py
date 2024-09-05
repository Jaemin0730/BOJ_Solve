n = int(input())
for _ in range(n):
    s, i, j = input().split()
    k = [a for a in range(int(i), int(j))]

    for b in range(len(s)):
        if b not in k:
            print(s[b], end="")
    print()