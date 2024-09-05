s1, s2 = map(int, input().split())
l1 = [list(map(int, input().split())) for _ in range(s1)]
l2 = [list(map(int, input().split())) for _ in range(s2)]
for i in range(s1):
    if l1[i][0] != l1[i][1]:
        print("Wrong Answer")
        exit()
for i in range(s2):
    if l2[i][0] != l2[i][1]:
        print("Why Wrong!!!")
        exit()
print("Accepted")