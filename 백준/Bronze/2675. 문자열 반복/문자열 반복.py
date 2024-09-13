tc = int(input())
for i in range(tc):
    test = input()
    te = test.split(" ")
    te[0] = int(te[0])
    for j in range(len(te[1])):
        print(te[1][j]*te[0],end = "")
    print("")