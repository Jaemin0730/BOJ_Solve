n = int(input())
m = sum(list(map(int, input().split())))

if m >= 1:
    print("Right")
elif m == 0:
    print("Stay")
else:
    print("Left")