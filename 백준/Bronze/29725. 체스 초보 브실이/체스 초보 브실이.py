s = 0
c = {
    ".": 0,
    "K": 0,
    "k": 0,
    "P": 1,
    "p": -1,
    "N": 3,
    "n": -3,
    "B": 3,
    "b": -3,
    "R": 5,
    "r": -5,
    "Q": 9,
    "q": -9,
}


for i in range(8):
    a = input()
    for i in a:
        s += c[i]

print(s)