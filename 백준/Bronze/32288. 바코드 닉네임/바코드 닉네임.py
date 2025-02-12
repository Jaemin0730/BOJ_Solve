n = int(input())
S = input()
sol = ""

for s in S:
    if s == "I":
        sol += "i"
    elif s == "l":
        sol += "L"

print(sol)