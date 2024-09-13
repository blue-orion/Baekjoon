test = int(input())
for i in range(test):
    num = input()
    a_b = num.split(" ")
    a = int(a_b[0])
    b = int(a_b[1])
    print("Case #{}: {}".format(i+1, a+b))
    