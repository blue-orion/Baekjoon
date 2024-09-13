import sys

a = input()
kda = a.split("/")
k = int(kda[0])
d = int(kda[1])
a = int(kda[2])

if k+a<d or d == 0 :
    print("hasu")
else:
    print("gosu")