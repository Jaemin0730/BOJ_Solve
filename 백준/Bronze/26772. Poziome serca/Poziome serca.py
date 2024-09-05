h = [
    " @@@   @@@ ",
    "@   @ @   @",
    "@    @    @",
    "@         @",
    " @       @ ",
    "  @     @  ",
    "   @   @   ",
    "    @ @    ",
    "     @     ",
]
n = int(input())

for line in h:
    k = [line for _ in range(n)]
    print(" ".join(k))