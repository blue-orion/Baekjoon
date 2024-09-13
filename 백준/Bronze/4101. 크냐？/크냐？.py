while 1:
    tc = input().split(" ")
    tc[0] = int(tc[0])
    tc[1] = int(tc[1])
    if tc[0] == 0 and tc[1] == 0 :
        break
    if (tc[0] > tc[1]):
        print("Yes")
    else:
        print("No")
