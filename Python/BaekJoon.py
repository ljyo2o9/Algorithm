import sys

n = int(sys.stdin.readline())
arr = []
de = 1
arr_so = []

def soinsu(a, b) :
    t = 2
    while True :
        if t > a or t > b : break
        if(a % t == 0 and b % t == 0) :
            arr.append(t)
            a //= t; b //= t
            t = 2
            continue
        t += 1
    arr.append(a); arr.append(b)

for i in range(n) :
    a, b = map(int, sys.stdin.readline().split())
    soinsu(a, b)
    for i in range(len(arr)) :
        de *= arr[i]
    arr_so.append(de)
    de = 1
    arr.clear()

for i in range(len(arr_so)) :
    print(int(arr_so[i]))