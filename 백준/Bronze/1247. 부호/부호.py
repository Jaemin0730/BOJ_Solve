from sys import stdin

for _ in range(3):
    cnt = int(stdin.readline())
    list = []
    for _ in range(0, cnt):
        list.append(int(stdin.readline()))
    if sum(list) > 0:
        print("+")
    elif sum(list) < 0:
        print("-")
    else:
        print(0)