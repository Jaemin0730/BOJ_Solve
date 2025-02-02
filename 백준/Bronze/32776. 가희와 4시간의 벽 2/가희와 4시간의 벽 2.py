s = int(input())
Ma, f, Mb = map(int, input().split())

if s <= Ma + f + Mb or s <= 240:
    print("high speed rail")
else:
    print("flight")