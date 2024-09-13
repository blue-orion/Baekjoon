import sys

yutnol = []
for i in range(3):
    a = (input())
    yutnol.append(a.split(' '))

for i in range(3):    
    cnt = yutnol[i].count('0')
    if cnt == 0 :
        print("E")
    elif cnt == 1 :
        print("A")
    elif cnt == 2 :
        print("B")
    elif cnt == 3 :
        print("C")
    else :
        print("D")
    
